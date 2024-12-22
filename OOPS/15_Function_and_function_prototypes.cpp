// FUNCTION_

#include <iostream>
using namespace std;
// int sum(int a, int b)
// {
// int c=a + b;
// return c;
// }

// FUNCTION PROTOTYPE
// syntax--->> Type function-name (argument);
//  int sum(int a, int b);          //------->>Acceptable
    int sum(int, int);            //------->>Acceptable
//  int sum(int a, b);          //------->>Not Acceptable
//  int sum( a , b);          //------->>not Acceptable

void g();
// void g(void); ------------>>Acceptable
int main()
{
    int num1, num2;
    cout << "ENTER FIRST NUMBER:" << endl;
    cin >> num1;

    cout << "ENTER SECOND NUMBER: " << endl;
    cin >> num2;
    // num1 and num2 are actual parameters.
    cout << "THE SUM IS " << sum(num1, num2);
    g();
    return 0;
}
int sum(int a, int b)
{
    int c = a + b; //  Formal parameter a and b will be taking values from actual parameters num1 and num2.
    return c;
}

void g()
{
    cout << "\nHello good morning";
}