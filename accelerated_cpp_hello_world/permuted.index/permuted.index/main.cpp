#include <iostream>

#include "charlie_container_type.h"
#include "string.h"

using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    
    string x = "split this you motherfucking asshole";
    
    container_type s = split(x);
    
    cout << "Here's the split of " << x << endl;
    
    write_strings(cout, s);
    
    return 0;
}
