#ifndef STUDENT_INFO_H_
#define STUDENT_INFO_H_

#include <iostream>;
#include <vector>;
#include <string>;

struct Student_info {
	std::string name;
	// double midterm, final;
	// std::vector<double> homework;
	double final_grade;
};

bool compare(const Student_info&, const Student_info&);

std::istream& read(std::istream&, Student_info&);

std::istream& read_hw(std::istream&, std::vector<double>&);

#endif /* STUDENT_INFO_H_ */
