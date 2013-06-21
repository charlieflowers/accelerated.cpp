#ifndef MAIN_H_INCLUDED
#define MAIN_H_INCLUDED

#include <vector>
#include <string>
#include <iostream>

#include "charlie_container_type.h"
#include "Index_entry.h"

container_type split(const std::string&);

std::string::size_type longest_string_width(const container_type&);

container_type frame(const container_type&);

std::ostream& write_strings(std::ostream&, const container_type&);

container_type hcat(const container_type&, const container_type&);

container_type vcat(const container_type&, const container_type&);

#endif // MAIN_H_INCLUDED
