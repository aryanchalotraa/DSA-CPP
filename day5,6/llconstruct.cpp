/*Constructor: are same as function define inside class and function name must be same as class name.

- Constructor did not have any return type.

- We can not call contructor function, it was invoke when object of a class is created.

- Constructor can be override.

- Types of constructor:

  1. Default const / Non parametrised const: constructor didn't have any parameter.

  2. Parametrised const: Constructor having parameter.

  3. Copy constructor: it initialize on object using another object

Note:

  for every constructor call, there must have construtor definition otherwise it shows error.

Distructor: It is used to destroy the object.

- in other words it deallocate memory allocated by constructor.

*/

#include <iostream>

using namespace std;

class btech
{

public:
  int roll;

  float cgpa;

  btech()

  {

    cout << "Constructor having no parameters." << endl;
  }

  btech(int r)

  {

    cout << "Constructor having one parameters." << endl;
  }

  btech(int r, float c)

  {

    cout << "Constructor having two parameters." << endl;
  }

  ~btech()

  {

    cout << "DIstructor called !" << endl;
  }
};

int main()

{

  btech s1(59, 8.7);

  btech s2(59);

  btech s3;

  btech *s4 = new btech(10, 8.2);

  delete s4;

  return 0;
}
