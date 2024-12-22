#include <iostream>
using namespace std;
int c = 78;
int main()
{
  // ********************BUILT IN DATA TYPES***********************

  int a, b, c;
  cout << "******************BUILT IN DATA TYPES********************\n\n";
  cout << "ENTER THE VALUE OF a: " << endl;
  cin >> a;
  cout << "ENTER THE VALUE OF b : " << endl;
  cin >> b;
  // cout<<"THE VALUE OF C IS "<<a+b;
  // OR
  c = a + b;
  cout << "THE SUM OF (a + b) i.e='c' is :" << c << endl;
  cout << "THE GLOBAL VALUR OF C IS :" << ::c; //-->   '::' is called scope resolution operator. It is used to print global variable.
  cout << endl<< endl;

  //********************FLOAT, DOUBLE, AND LONG DOUBLE LITERALS****************

  cout << "*******************Float , double and long double Literal****************\n\n";

  float d = 34.4;
  long double e = 34.4;
  double f = 34.4;
  cout << "THE VALUE OF d IS : " << d;
  cout << "\nTHE VALUE OF e IS : " << e;
  cout << "\nTHE VALUE OF f IS : " << f;
  cout << endl;
  cout << endl;

  cout << "\nTHE SIZE OF d IS : " << sizeof(d);
  cout << "\nTHE SIZE OF e IS : " << sizeof(e);
  cout << "\nTHE SIZE OF f IS : " << sizeof(f);
  cout << "\nTHE SIZE OF 34.4F IS : " << sizeof(34.4F);
  cout << "\nTHE SIZE OF 34.4L IS : " << sizeof(34.4L);
  cout << "\nTHE SIZE OF 34.4 IS : " << sizeof(34.4) << "\n\n"; //--->  34.4 considered as double if nothing is written .

  //*******************REFERALS VARIABLE*********************

  cout << "****************REFERALS VARIABLE*********************\n\n";
  float g = 78.1;
  float &h = g;
  cout << "THE VALUE OF g IS : " << g;
  cout << "\nTHE VALUE OF h IS : " << h << endl
       << endl;

  //****************TYPE CASTING******************************

  cout << "****************TYPE CASTING******************************\n\n";
  cout << "Type casting means converstion of variables\n";
  int i = 80;
  float j = 98.7;
  cout << "THE TYPECASTING OF I INTO FLOAT IS :" << (float)i << endl;
  cout << "THE TYPECASTING OF I INTO FLOAT IS :" << float(i) << endl;

  cout << "THE TYPECASTING OF J INTO INT IS : " << (int)j << endl;
  cout << "THE TYPECASTING OF J INTO INT IS : " << int(j) << endl;
  int k = int(j);
  cout << "THE VALUE OF K IS : " << k<<endl;

  cout << "THE VALUE OF i + j IS : " << i + j << endl;
  cout << "THE VALUE OF i + int(j) IS : " << i + int(j) << endl;
  cout << "THE VALUE OF i + (int)j IS : " << i + (int)j << endl;

  return 0;
}
