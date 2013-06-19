/*
 * read_words.cpp
 *
 *  Created on: Jun 18, 2013
 *      Author: cflowers
 */

#include "read_words.h";

using std::istream; 		using std::vector;
using std::string;

istream& read_words(istream& in, vector<string>& word_vec) {

	if(in) {
		word_vec.clear();

		string x;
		while(in >> x) {
			word_vec.push_back(x);
		}

		in.clear();
	}

	return in;
}



