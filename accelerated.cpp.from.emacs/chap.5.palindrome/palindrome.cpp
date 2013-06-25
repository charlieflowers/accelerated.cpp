#include <iostream>
#include <string>
#include <vector>

#include "string.h"

#include "misc.h"

using std::cout;
using std::endl;

using std::string;
using std::vector;

bool is_palindrome(string x) {
  cout << "Seeing if " << x << " is a palindrome:" << endl;

  string::const_iterator frontwards;
  string::reverse_iterator backwards;

  backwards = x.rbegin();

  for(frontwards = x.begin(); frontwards != x.end(); ++frontwards, ++backwards) {
    cout << "Does " << (*frontwards) << " match " << (*backwards) << "?" << endl;
    if((*frontwards) != (*backwards)) {
      cout << "No, " << x << " is not a palindrome, because " << (*frontwards) << " does not match " << (*backwards) << endl;

      return false;
    }
  }

return true;
}

int main() {
  cout << "palindrome time" << endl;

  write_some_stuff(cout);

  container_type dict = split("These are some words and some of them like rotor and tot are palindromes My dutytud is to find them");

  container_type palindromes;

  for(container_type::const_iterator iter = dict.begin(); iter != dict.end(); ++iter) {
    string item = *iter;

    // a lazy approach would simply loop from each end and compare. You'd do twice as much work as necessary, but it would still give you the right answer.

    if(is_palindrome(item)) palindromes.push_back(item);
  }

  cout << "Here are the palindromes: " << endl;

  write_strings(cout, palindromes);

  return 0;
}
