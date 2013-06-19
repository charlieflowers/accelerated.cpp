//#include <iostream>;
//#include <vector>;
//
//using std::cout;		using std::endl;
//using std::cin;			using std::string;
//using std::vector;
//
//int main() {
//	cout << "sup" << endl;
//
//	vector<string> names;
//	vector< vector<double> > grades;
//
//	string next_student;
//	while(1==1) {
//		cout << "Enter the name of the next student: ";
//		cin >> next_student;
//
//		if(! cin) break;
//
//		names.push_back(next_student);
//
//		cout << "Enter the grades for " << next_student << ": ";
//
//		vector<double> her_grades;
//
//		double next_grade;
//
//		while(cin >> next_grade) {
//			if(next_grade == -99) break;
//
//			her_grades.push_back(next_grade);
//		}
//
//		grades.push_back(her_grades);
//
//		cout << endl;
//	}
//
//	cout << "OK, asshole, here's the scoop." << endl;
//
//	typedef vector<string>::size_type string_vec_sz;
//	string_vec_sz num_students = names.size();
//
//	typedef vector<double>::size_type double_vec_sz;
//
//	for(int sc = 0; sc < num_students; sc++) {
//		string this_student = names[sc];
//
//		vector<double> these_grades = grades[sc];
//		double_vec_sz num_grades = these_grades.size();
//
//		cout << "Student # " << sc << ", named " << this_student << ", has " << num_grades << " grades: " << endl;
//
//		for(int gc = 0; gc < num_grades; gc++) {
//			cout << these_grades[gc] << ", ";
//		}
//	}
//
//	return 0;
//}
