#include <iostream>

#include "charlie_container_type.h"
#include "string.h"
#include "permuted_index.h"

using std::cout;            using std::endl;

int main()
{
    cout << "Hello world!" << endl;
    
    container_type phrases;
    phrases.push_back("The quick brown fox");
    phrases.push_back("jumped over the fence");
    
    cout << "Here's the list of phrases we'll index: " << endl;
    
    write_strings(cout, phrases);
    
    list<Index_entry> index = build_index(phrases);
    
    cout << "Here's the permuted index: " << endl;
    
    to_stream(cout, index);
        
    return 0;
}
