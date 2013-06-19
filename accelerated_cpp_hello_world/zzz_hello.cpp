//#include <algorithm>
//#include <iomanip>
//#include <ios>
//#include <iostream>
//#include <string>
//#include <vector>
//
//using std::cin;
//using std::cout;
//using std::endl;
//using std::setprecision;
//using std::min;
//using std::string;
//using std::vector;
//
//int main() {
//
//	// How many times does each distinct word appear in its input.
//	cout << "Type in some words followed by eof: ";
//
//	string entered_word;
//	vector<string> words;
//
//	while(cin >> entered_word) {
//		words.push_back(entered_word);
//	}
//
//	typedef vector<string>::size_type vec_sz;
//	vec_sz words_entered = words.size();
//
//	if(words_entered == 0) {
//		cout << "Come on jackass, enter some words!" << endl;
//		return 1;
//	}
//
//	cout << "Hang on to your hat motherfucker" << endl;
//
//	string longest_word = words[0]; // safe because we checked for vector empty.
//	string shortest_word = words[0]; // ditto.
//
//	for(int c = 0; c < words_entered; c++) {
//
//		string this_word = words[c];
//
//		if(this_word.size() < shortest_word.size()) shortest_word = this_word;
//		if(this_word.size() > longest_word.size()) longest_word = this_word;
//	}
//
//	cout << "The longest word entered is " << longest_word.size() << ", and "
//				"one example of that length is " << longest_word << endl;
//
//	cout << "The shortest word entered is " << shortest_word.size() << ", and "
//				"one example of that length is " << shortest_word << endl;
//
//	cout << "peace out, bitch" << endl;
//
//	return 0;
//
//
//
//
//
//
//
//
////	typedef vector<string>::size_type vec_sz;
////
////	vec_sz words_entered = words.size();
////
////	sort(words.begin(), words.end());
////
////	// loop invariant: we have processed c words so far
////	for(int c = 0; c <= words_entered; c++) {
////
////		string current_word = words[c];
////		int current_word_count = 1;
////
////		int next_word_index = c + 1;
////
////		while(next_word_index < words_entered && words[next_word_index] == current_word) {
////			current_word_count++;
////			c++; // keep the invariant true
////			next_word_index = c + 1;
////		}
////
////		cout << "The word " << current_word << " appears " << current_word_count
////				<< " times!" << endl;
////	}
////
////	return 0;
//
//
//
//
////	using std::sort;
////	using std::streamsize;
////	using std::string;
////	using std::vector;
////
////	// ask for and read the student's name
////	cout << "Please enter your first name: ";
////	string name;
////
////	cin >> name;
////	cout << "Hello, " << name << "!" << endl;
////	// ask for and read the midterm and final grades
////	cout << "Please enter your midterm and final exam grades: ";
////	double midterm, final;
////	cin >> midterm >> final;
////	// ask for and read the homework grades
////	cout << "Enter all your homework grades, "
////			"followed by end-of-file: ";
////	vector<double> homework;
////	double x;
////	// invariant: homework contains all the homework grades read so far
////	while (cin >> x)
////		homework.push_back(x);
////	// check that the student entered some homework grades
////
////	cout << "made it here!" << endl;
////
////	typedef vector<double>::size_type vec_sz;
////	vec_sz size = homework.size();
////	if (size == 0) {
////		cout << endl << "You must enter your grades. "
////				"Please try again." << endl;
////		return 1;
////	}
////	// sort the grades
////	sort(homework.begin(), homework.end());
////
////	// now, let's compute quartiles.
////
////	// We've sorted, so the first 1/4 are the lowest quartile, and so on.
////	// If you have 11 items, the last quartile gets short shift.
////	// If you have 13 items, same deal, the last quartile has 1 item.
////
////	cout << "after the sort" << endl;
////
////	vec_sz quartlie_size = size/4;
////	int remainder = size % 4;
////	if(remainder) ++quartlie_size;
////
////	cout << "right before the loop" << endl;
////
////	// invariant: the next step is to output the quartile=th quartile
////	for(int quartile = 0; quartile <= 3; quartile++) {
////		cout << "Quartile # " << quartile + 1 << ": ";
////
////		int this_quartile_start_index = quartile * quartlie_size;
////		int this_quartile_end_index = min(this_quartile_start_index + quartlie_size - 1, size - 1);
////
////		for(int index = this_quartile_start_index; index <= this_quartile_end_index; index++) {
////			cout << homework[index] << ", ";
////		}
////
////		cout << endl;
////	}
////
////	return 0;
//
////	// compute the median homework grade
////	vec_sz mid = size/2;
////	double median;
////	median = size % 2 == 0 ? (homework[mid] + homework[mid-1]) / 2
////			: homework[mid];
////	// compute and write the final grade
////	streamsize prec = cout.precision();
////	cout << "Your final grade is " << setprecision(3)
////		 << 0.2 * midterm + 0.4 * final + 0.4 * median << setprecision(prec) << endl;
////	return 0;
//}
