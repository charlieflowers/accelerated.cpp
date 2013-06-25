
#include <iostream>

#include "misc.h"

using std::ostream;
using std::cout;
using std::endl;

ostream& write_some_stuff(ostream& os) {
  os << "This is some stuff" << endl;
  os << "written to a stream by a function in another cpp file declared for us in a header" << endl;

  return os;
}
