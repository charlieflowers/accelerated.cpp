///*
// * main.cpp
// *
// *  Created on: Jun 18, 2013
// *      Author: cflowers
// */
//
//#include <iostream>;
//#include <iomanip>;
//#include <vector>;
//#include <algorithm>;
//#include <stdexcept>;
//
//#include "median.h";
//#include "Student_info.h";
//#include "grade.h";
//
//using std::cout;				using std::endl;
//using std::vector;				using std::cin;
//using std::string;				using std::max;
//using std::streamsize;			using std::setprecision;
//using std::domain_error;
//
//int main() {
//
//	// For the first time in the book, we're reading from a file and not human input.
//	vector<Student_info> students;
//
//	typedef string::size_type string_sz;
//	string_sz longest = 0;
//
//	Student_info s;
//	while(read(cin, s)) {
//		students.push_back(s);
//		longest = max(longest, s.name.size());
//	}
//
//	// He wants the students in alphabetical order
//	sort(students.begin(), students.end(), compare);
//
//	typedef vector<Student_info>::size_type vec_sz;
//	vec_sz count = students.size();
//
//	for(vec_sz c = 0; c != count; c++) {
//		cout << students[c].name << string(longest + 1 - students[c].name.size(), ' ');
//
//		// try {
//			double final_grade = grade(students[c]);
//
//			streamsize prec = cout.precision();
//			cout << setprecision(3) << final_grade << setprecision(prec);
////		} catch(domain_error& e) {
////			cout << "An error occurred: " << e.what();
////		}
//
//		cout << endl;
//	}
//
//	return 0;
//}
//
//
