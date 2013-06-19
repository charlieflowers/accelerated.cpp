///*
// * main_squares.cpp
// *
// *  Created on: Jun 18, 2013
// *      Author: cflowers
// */
//
//#include <iostream>;
//#include <iomanip>;
//#include <vector>;
//#include <algorithm>;
//
//using std:: cout;			using std::setw;
//using std::endl;			using std::vector;
//using std::max;				using std::streamsize;
//using std::setprecision;
//
//int how_many_digits_before_decimal(double target) {
//	int count = 1;
//	while((target = target / 10) >= 1) count++;
//	// for fun, could also do this recursively.
//	return count;
//}
//
//int main() {
//
//	vector<double> squares;
//	vector<double> originals;
//
//	int widest_original = 0;
//	int widest_square = 0;
//
//	for(double i = 999999999999999; i != 1000000000000000; i++) {
//		originals.push_back(i);
//		double square = i*i;
//
//		squares.push_back(square);
//
//		widest_original = max(widest_original, how_many_digits_before_decimal(i));
//		widest_square = max(widest_square, how_many_digits_before_decimal(square));
//	}
//
//	typedef vector<double>::size_type vec_sz;
//
//	cout << "Here we go" << endl;
//	cout << "how many? " << squares.size() << endl;
//	cout << "widest sq: " << widest_square << endl;
//
//	for(vec_sz i = 0; i != squares.size(); i++) {
//		streamsize prec = cout.precision();
//
//		cout << setprecision(widest_square + 3)
//				<< setw(widest_original + 3)
//				<< originals[i]
//				<< " "
//				<< setw(widest_square + 3)
//				<< squares[i]
//				<< setprecision(prec) << endl;
//	}
//
//	return 0;
//
//}
//
//
//
//
//
