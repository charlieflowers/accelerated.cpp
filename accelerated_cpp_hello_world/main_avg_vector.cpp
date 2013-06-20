/*
 * main_avg_vector.cpp
 *
 *  Created on: Jun 19, 2013
 *      Author: cflowers
 */

#include <iostream>;
#include <vector>;

using std::cout;			using std::endl;
using std::vector;			using std::cin;

int main() {
	cout << "Enter the values: " << endl;

	vector<double> vec;

	double x;
	while(cin >> x) vec.push_back(x);

	double sum = 0;

	typedef vector<double>::size_type vec_sz;

	for(vec_sz i = 0; i != vec.size(); i++) {
		sum += vec[i];
	}

	cout << "Sum is " << sum << endl;

	double avg = sum / vec.size();

	cout << "AVERAGE IS: " << avg << endl;
}



