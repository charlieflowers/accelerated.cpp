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
using std::ostream;
using std::endl;

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

bool is_failing(const Student_info& s) {
    return grade(s) < 60;
}

vector<Student_info> separate_failures(vector<Student_info>& students) {
    vector<Student_info> fail;

    vector<Student_info>::iterator iter = students.begin();

    while(iter != students.end()) {
        if(is_failing(*iter)) {
            fail.push_back(*iter);
            iter = students.erase(iter);
            // This is of course slow as shit with a vector, but that is the point.
        } else {
            iter++;
        }
    }

    return fail;
}

ostream& student_tostring(ostream& os, const Student_info& s) {
    if(os) {
        os << s.name << endl;

        os << "   Midterm:    " << s.midterm << endl;
        os << "   Final:      " << s.final << endl;
        os << "   Homework:   " << s.homework.size() << " items" << endl;
        os << "   GRADE:      " << grade(s) << endl;
        os << endl;
    }

    return os;
}

ostream& print_student_vector(ostream& os, const vector<Student_info>& vec) {
    if(os) {
        for(vector<Student_info>::const_iterator iter = vec.begin();
            iter != vec.end(); iter++) {
                student_tostring(os, *iter);
            }
    }

    return os;
}
