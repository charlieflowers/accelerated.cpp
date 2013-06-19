/*
 * median.cpp
 *
 *  Created on: Jun 18, 2013
 *      Author: cflowers
 */

#include <vector>;
#include <stdexcept>;

#include "median.h";

using std::vector;
using std::domain_error;

// NOTE THAT THE VECTOR PASSED HERE IS PASSED *BY COPY*! And we want that bc we sort!
double median(vector<double> vec) {

	typedef vector<double>::size_type vec_sz;
	vec_sz count = vec.size();

	if(count == 0) throw domain_error("median of an empty vector!");

	sort(vec.begin(), vec.end());

	vec_sz middle = count / 2;

	return count % 2 == 0 ? (vec[middle - 1] + vec[middle]) / 2 : vec[middle];
}



