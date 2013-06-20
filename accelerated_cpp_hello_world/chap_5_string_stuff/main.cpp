#include <iostream>;
#include <vector>;


#include "../chapter_5_primary/string.h";

using std::cout;            using std::endl;
using std::string;          using std::vector;
using std::getline;         using std::cin;

int main()
{
    cout << "Enter a line of text: " << endl;

    string to_split;

//    string x = "lets just hardcode some strings for a second";

    while(getline(cin, to_split)){
        cout << "Heres the input: " << to_split << endl;

        vector<string> result = split(to_split);

        cout << "The result has " << result.size() << " words" << " and here they are: " << endl;

        for(vector<string>::iterator iter = result.begin();
            iter != result.end(); iter++) {
                cout << (*iter) << endl;
            }

        cout << "The longest string is " << longest_string_width(result) << " characters." << endl;

        cout << "Heres that sumbitch framed: " << endl;

        write_strings(cout, frame(result)) << endl;


    }

    return 0;
}
