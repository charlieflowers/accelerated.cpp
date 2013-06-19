/*
 * grade.cpp
 *
 *  Created on: Jun 18, 2013
 *      Author: cflowers
 */

#include <stdexcept>;
#include <vector>;

#include "grade.h";
#include "median.h";
#include "Student_info.h";

using std::vector;
using std::domain_error;

double grade(double midterm, double final, double homework) {
	return 0.2 * midterm + .4 * final + .4 * homework;
}

double grade(double midterm, double final, const vector<double>& hw) {
	if(hw.size() == 0) throw domain_error("This jackass didn't do any homework!");
	return grade(midterm, final, median(hw));
}

double grade(const Student_info& s) {
	return grade(s.midterm, s.final, s.homework);
}


