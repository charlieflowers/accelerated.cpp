
#include <iostream>

#include "some_header.h"

using namespace std;



int main() {
	cout << "Well ill be a monkeys uncle" << endl;

	dump_some_shit(cout);

	system("pause");

	return 0;
}

ostream& dump_some_shit(ostream& os) {
	
	if (os)
	{
		cout << "Some output" << " and some more" << endl;
		cout << " and some more too" << endl;
	}

	return os;
}