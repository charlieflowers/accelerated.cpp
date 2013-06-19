///*
// * main_count_each_word.cpp
// *
// *  Created on: Jun 18, 2013
// *      Author: cflowers
// */
//
//#include <vector>;
//#include <iostream>;
//#include <string>;
//#include <algorithm>;
//
//#include "read_words.h";
//
//using std::cin;			using std::cout;
//using std::vector;		using std::endl;
//using std::string;		using std::sort;
//
//int main() {
//
//	vector<string> words;
//	read_words(cin, words);
//
//	sort(words.begin(), words.end());
//
//	int index = 0;
//	string word_to_match = "QQQQQ"; // sentinel because he hasn't covered some other concepts.
//
//	int word_count;
//
//	while(index < words.size()) {
//		string this_word = words[index];
//
//		if(this_word == word_to_match) {
//			word_count++;
//		} else {
//			// I wrote this kind of crazy for the hell of it, something was telling
//			//  me this should work. Not readable, I wouldn't do it in real code.
//			if(word_to_match != "QQQQQ") cout << word_count << " times!" << endl;
//
//			cout << "The word " << this_word << " appears ";
//			word_to_match = this_word;
//			word_count = 1;
//		}
//
//		index++;
//	}
//
//	if(word_to_match != "QQQQQ") cout << word_count << " times!" << endl;
//
//	return 0;
//}
//
//
//
