#include <iostream>;
#include <vector>;


#include "../chapter_5_primary/string.h";
#include "charlie_container_type.h";

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

        container_type result = split(to_split);

        cout << "The result has " << result.size() << " words" << " and here they are: " << endl;

        for(container_type::iterator iter = result.begin();
            iter != result.end(); iter++) {
                cout << (*iter) << endl;
            }

        cout << "The longest string is " << longest_string_width(result) << " characters." << endl;

        cout << "Heres that sumbitch framed: " << endl;

        write_strings(cout, frame(result)) << endl;

        container_type another_vec = split("This is yet another vector that is just ripe for the splitting");

        cout << "Here are 2 vectors hcated " << endl;

        write_strings(cout, hcat(result, another_vec));

        cout << "And now here they are vcated: " << endl;

        write_strings(cout, vcat(result, another_vec));
    }

    return 0;
}
