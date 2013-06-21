#ifndef permuted_index_permuted_index_h
#define permuted_index_permuted_index_h

#include <list>
#include <string>
#include <iostream>

#include "charlie_container_type.h"
#include "Index_entry.h"

Index_entry build_entry(const container_type&);

std::list<Index_entry> build_index(const std::string&);

std::list<Index_entry> build_index(const container_type&);

std::ostream& to_stream(std::ostream&, Index_entry);

std::ostream& to_stream(std::ostream&, std::list<Index_entry>);


#endif
