#include <string>;
#include <vector>;
#include <cctype>;
#include <iostream>;
#include <algorithm>;

using std::string;          using std::vector;
using std::isspace;         using std::cout;
using std::endl;            using std::min;

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
