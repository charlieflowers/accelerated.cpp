#ifndef MAIN_H_INCLUDED
#define MAIN_H_INCLUDED

#include <vector>;
#include <string>;
#include <iostream>;

std::vector<std::string> split(const std::string&);

std::string::size_type longest_string_width(const std::vector<std::string>&);

std::vector<std::string> frame(const std::vector<std::string>&);

std::ostream& write_strings(std::ostream&, const std::vector<std::string>&);

std::vector<std::string> hcat(const std::vector<std::string>&, const std::vector<std::string>&);

std::vector<std::string> vcat(const std::vector<std::string>&, const std::vector<std::string>&);

#endif // MAIN_H_INCLUDED
