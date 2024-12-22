// there are two type of header files:
// 1. system header files: It comes with the COMPILER.
// i.e
#include <iostream>
// 2. user defined header files: It is is written by the programer.
// Eg
//#include"this.h" //--> This will produce an error if "this.h" is no present in the current directory.

using namespace std;
int main()
{
  int a = 4, b = 5;
  cout << "operators in c++:\na=4 ,  b=5 " << endl;
  cout << "following are the types of operators in c++ ." << endl;
  cout << endl;
  cout << "ARITHMETIC OPERATOR." << endl;
  cout << endl;
  cout << "the value of a + b is " << a + b << "." << endl;
  cout << "the value of a - b is " << a - b << "." << endl;
  cout << "the value of a * b is " << a * b << "." << endl;
  cout << "the value of a / b is " << a / b << "." << endl; // division gives only integer value.
  cout << "the value of b % a is " << b % a << "." << endl; //---> '%' is called modulo.it is a arithmetic operator which means to get remainder after division.
  cout << "the value of a ++ is " << a++ << "." << endl;    //   'a ++' means print the value of a and then increase by 1. i.e output is 4 and then a= 5.
  cout << "the value of a -- is " << a-- << "." << endl;    //  'a--' means print the value of a  and then decreased by 1.  i.e output is 5 and then a=4.
  cout << "the value of ++a is " << ++a << "." << endl;     //  '++a' means first add by 1 and then print.
  cout << "the value of --a is " << --a << "." << endl;     //  '--a' means first substracted by 1 and then print.
  cout << endl;
  cout << endl;
  cout << endl;

  cout << "ASSIGNMENT OPERATOR:-- It is used to assign value to vriable i.e int a-=4 , b= 5.";
  cout << endl;
  cout << endl;
  cout << endl;

  cout << "COMPARISION OPERATOR" << endl;
  cout << endl;
  cout << "the value of a == b is " << (a == b) << endl;
  cout << "the value of a != b is " << (a != b) << endl;
  cout << "the value of a <= b is " << (a <= b) << endl;
  cout << "the value of a >= b is " << (a >= b) << endl;
  cout << "the value of a > b is " << (a > b) << endl;
  cout << "the value of a < b is " << (a < b) << endl;
  cout << endl;
  cout << endl;
  cout << endl;

  cout << "LOGICAL OPERATOR" << endl;
  cout << endl;
  cout << "the value of LOGICAL AND OPERATORS ((a==b) && (a<b)) is :" << ((a == b) && (a < b)) << endl;
  cout << "the value of LOGICAL OR OPERATORS ((a<=b) || (a>b)) is :" << ((a <= b) || (a > b)) << endl;
  cout << "the value of LOGICAL NOT OPERATORS (!(a==b)) is :" << (!(a == b)) << endl;

  return 0;
}