#include <list>
#include <iostream>
#include <string>
#include <stdexcept>

#include "charlie_container_type.h"
#include "Index_entry.h"
#include "string.h"

#include "permuted_index.h"

using std::string;          using std::domain_error;
using std::ostream;         using std::endl;
using std::cout;

const string BEGIN_SENTINEL = "BEGIN_SENTINEL";

bool compare_index_entries(const Index_entry& left, const Index_entry& right) {
    return left.phrase <= right.phrase;
}

Index_entry build_entry(const container_type& rotatable) {
    
    cout << "now inside the function, the value is: " << endl;
    write_strings(cout, rotatable);
    
    Index_entry result;
        
    bool are_we_building_the_key = false;
    
    for(container_type::const_iterator iter = rotatable.begin();
        iter != rotatable.end();
        ++iter) {
        
        string item = *iter;
        
        if(item == BEGIN_SENTINEL) {
            are_we_building_the_key = true;
        } else {
            if(are_we_building_the_key) {
                result.key += item + " ";
            } else {
                result.phrase += item + " ";
            }
        }
    }
    
    cout << "About to return this index entry: " << endl;
    
    to_stream(cout, result);
        
    return result;
}

list<Index_entry> build_index(const string& s) {
    
    typedef container_type::size_type vec_sz;
    
    list<Index_entry> result;
    
    container_type rotatable = split(s);
    vec_sz number_of_rotations_needed = rotatable.size();
    // It's not really a rotatable until the next line:
    rotatable.insert(rotatable.begin(), BEGIN_SENTINEL);
    
    for(vec_sz i = 0; i != number_of_rotations_needed; ++i) {
        
        container_type this_rotation = rotatable; // copy original rotatable so we can make chgs.
        string item = *this_rotation.begin();
        this_rotation.erase(this_rotation.begin());
        this_rotation.push_back(item);
        
        cout << "Before calling the func, this_rotation is: " << endl;
        
        write_strings(cout, this_rotation);
        
        Index_entry entry = build_entry(this_rotation);
        result.push_back(entry);
    }

    cout << "Here's one of the indexes: " << endl;
    to_stream(cout, result);
    
    return result;
}

list<Index_entry> build_index(const container_type& phrases) {
    
    list<Index_entry> result;
    
    // Build an index for each phrase. But concatenate them all into one list, and return that.
    for(container_type::const_iterator iter = phrases.begin();
        iter != phrases.end();
        ++iter) {
        
        list<Index_entry> phrase_index = build_index(*iter); // return a new list for phrase to be "unit testable"
        
        result.insert(result.end(), phrase_index.begin(), phrase_index.end());
    }
    
    result.sort(compare_index_entries);
    
    return result;
}

ostream& to_stream(ostream& os, Index_entry e) {
    if(os) {
        os << " " + e.key + " -> " + e.phrase << endl;
    }
    
    return os;
}

ostream& to_stream(ostream& os, list<Index_entry> c) {
    for(list<Index_entry>::const_iterator iter = c.begin();
        iter != c.end();
        iter++) {
        
        to_stream(os, (*iter));
    }
    
    return os;
}

