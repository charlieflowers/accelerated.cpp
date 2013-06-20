#include <string>;
#include <vector>;
#include <cctype>;
#include <iostream>;
#include <algorithm>;

using std::string;          using std::vector;
using std::isspace;         using std::cout;
using std::endl;            using std::min;
using std::max;             using std::ostream;

vector<string> split(const string& text) {

    vector<string> result;

    string::size_type i = 0, j = 0;

    while(i != text.size() && j != text.size()) {

        // Skip the starting spaces.
        while(i != text.size() && isspace(text[i]))
            i++;

        // Now i is on a non-space.
        j = min(i + 1, text.size());

        while(j != text.size() && ! isspace(text[j]))
            j++;

        // now, j is either on a space, or the end of the string.

        if(i != j) {
            string found_string = text.substr(i, j - i);

            cout << "Found: \"" << found_string << "\"" << endl;

            result.push_back(found_string);

            i = j;
        }
    }

    return result;
}

string::size_type longest_string_width(const vector<string>& vec){

    string::size_type result = 0;

    for(vector<string>::const_iterator iter = vec.begin();
        iter != vec.end(); iter++) {
            result = max(result, iter->size());
        }

    return result;
}

vector<string> frame(const vector<string>& vec) {
    vector<string> result;

    string::size_type longest = longest_string_width(vec);

    string border = string(longest + 4, '*');

    result.push_back(border);

    for(vector<string>::const_iterator iter = vec.begin();
        iter != vec.end(); iter++) {
            string spaces = string(longest - (iter->size()), ' ');
            result.push_back("* " + (*iter) + spaces + " *");
        }

    result.push_back(border);

    return result;
}

ostream& write_strings(ostream& os, const vector<string>& strings) {
    for(vector<string>::const_iterator iter = strings.begin();
            iter != strings.end(); iter++) {
                os << (*iter) << endl;
            }
    return os;
}

vector<string> hcat(const vector<string>& left, const vector<string>& right) {

    vector<string> result;

    typedef  vector<string>::size_type vec_sz;

    vec_sz longest_vec_size = max(left.size(), right.size());

    string::size_type longest_string_on_left = longest_string_width(left);

    for(vec_sz i = 0; i != longest_vec_size; ++i) {

        string new_entry;

        if(i < left.size()) {
            // We have a left-hand item to write.
            new_entry = left[i] + string(longest_string_on_left - left[i].size(), ' ');
        } else {
            new_entry = string(longest_string_on_left, ' '); // todo these can be consolidated.
        }

        if(i < right.size()) {
            // We have a righht hand item to write.
            new_entry += " " + right[i];
        }

        result.push_back(new_entry);
    }

    return result;
}

vector<string> vcat(const vector<string>& top, const vector<string>& bottom) {
    vector<string> result;

    // First, just completely copy the top!
    result = top;

    result.insert(result.end(), bottom.begin(), bottom.end());

    return result;
}

















