#include <string>
#include <vector>
#include <cctype>
#include <iostream>
#include <algorithm>

#include "charlie_container_type.h"

using std::string;          using std::vector;
using std::isspace;         using std::cout;
using std::endl;            using std::min;
using std::max;             using std::ostream;

container_type split(const string& text) {

    container_type result;

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

string::size_type longest_string_width(const container_type& vec){

    string::size_type result = 0;

    for(container_type::const_iterator iter = vec.begin();
        iter != vec.end(); iter++) {
            result = max(result, iter->size());
        }

    return result;
}

container_type frame(const container_type& vec) {
    container_type result;

    string::size_type longest = longest_string_width(vec);

    string border = string(longest + 4, '*');

    result.push_back(border);

    for(container_type::const_iterator iter = vec.begin();
        iter != vec.end(); iter++) {
            string spaces = string(longest - (iter->size()), ' ');
            result.push_back("* " + (*iter) + spaces + " *");
        }

    result.push_back(border);

    return result;
}

ostream& write_strings(ostream& os, const container_type& strings) {
    for(container_type::const_iterator iter = strings.begin();
            iter != strings.end(); iter++) {
                os << (*iter) << endl;
            }
    return os;
}

container_type hcat(const container_type& left, const container_type& right) {

    container_type result;

    typedef  container_type::size_type vec_sz;

    string::size_type longest_string_on_left = longest_string_width(left);

    container_type::const_iterator left_iter = left.begin(), right_iter = right.begin();

    while(left_iter != left.end() || right_iter != right.end()) {

        string new_entry;

        if(left_iter != left.end()) {
            // We have a left-hand item to write.
            new_entry = (*left_iter) + string(longest_string_on_left - left_iter->size(), ' ');
            left_iter++;
        } else {
            new_entry = string(longest_string_on_left, ' '); // todo these can be consolidated.
        }

        if(right_iter != right.end()) {
            // We have a righht hand item to write.
            new_entry += " " + (*right_iter);
            right_iter++;
        }

        result.push_back(new_entry);
    }

    return result;
}

container_type vcat(const container_type& top, const container_type& bottom) {
    container_type result;

    // First, just completely copy the top!
    result = top;

    result.insert(result.end(), bottom.begin(), bottom.end());

    return result;
}

















