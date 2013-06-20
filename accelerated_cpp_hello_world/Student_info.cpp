/*
 * student_info.cpp
 *
 *  Created on: Jun 18, 2013
 *      Author: cflowers
 */

// INTERESTING! Since the header will have necessary includes, you have a lot less
//  includes in the source file! (Maybe even none other than the header you're implementing)

#include "Student_info.h";

using std::istream;

using std::vector;
using std::endl;

bool compare(const Student_info& left, const Student_info& right) {
	return left.name < right.name;
}

istream& read(istream& is, Student_info& s)
{
	is >> s.name >> s.midterm >> s.final;

	read_hw(is, s.homework);
	return is;
}

istream& read_hw(istream& is, vector<double>& target)
{
	if(is) {
		target.clear();

		double x;
		while(is >> x) target.push_back(x);

		is.clear();
	}

	return is;
}

