#include <iostream>;
#include <vector>;


#include "../chapter_5_primary/string.h";

using std::cout;            using std::endl;
using std::string;          using std::vector;

int main()
{
    cout << "Hello world!" << endl;

    string to_split = "          This    is       the    input   that         we   will    be      splitting      ";

    cout << "Heres the input: " << to_split << endl;

    vector<string> result = split(to_split);

    cout << "The result has " << result.size() << " words" << endl;

    return 0;
}
