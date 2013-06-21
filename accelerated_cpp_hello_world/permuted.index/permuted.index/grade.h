#ifndef GRADE_H_
#define GRADE_H_

#include <vector>;

#include "Student_info.h";

double grade(double, double, double);
double grade(double, double, const std::vector<double>&);
double grade(const Student_info&);
bool is_failing(const Student_info&);

std::vector<Student_info> separate_failures(std::vector<Student_info>& students);

std::ostream& student_tostring(std::ostream&, const Student_info&);

std::ostream& print_student_vector(std::ostream&, const std::vector<Student_info>&);

#endif /* GRADE_H_ */
