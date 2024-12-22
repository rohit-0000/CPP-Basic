// Questions
// > You have to create 2 classes:

// 1.SimpleCalculator - Takes input of 2 numbers using a utility function and performs +, -, *, / and
//                     displays the results using another function.

// 2.ScienticCalculator - Takes input of 2 numbers using a utility function and performs any four
//                         scientific operation of your chioice and displays the results using another function.
// > Create another class HybridCalculator and inherit it using these 2 classes
// Create an object of HybridCalculator and display results of simple and scientific calculator.
// Also, answer the questions given below.

// Q1. What type of Inheritance are you using?
// Q2. Which mode of Inheritance are you using?
// Q3. How is code reusability implemented?

// SOLUTION :

// A1. Multiple inheritance
// A2. Public SimpleCalculator,Public ScienticCalculator
// A3. Due to use of inheritance ,we didnot need to create whole member of class.we inherte from other class.

#include <bits/stdc++.h>
#include <cmath>
using namespace std;
class SimpleCalculator
{
    float a, b;

public:
    void getvalue1()
    {
        cout << "Enter the first number" << endl;
        cin >> a;
        cout << "Enter the second number" << endl;
        cin >> b;
    }
    void display1()
    {
        int c1 = a + b;
        int d1 = a - b;
        int e1 = a * b;
        double f1 = a / b;
        cout << "The sum of two number is " << c1 << endl;
        cout << "The subtraction of two number is " << d1 << endl;
        cout << "The Product of two number is " << e1 << endl;
        cout << "The division of two number is " << f1 << endl;
    }
};

class ScienticCalculator
{
    int c, d;

public:
    void getvalue2()
    {
        cout << "Enter the value of c" << endl;
        cin >> c;
        cout << "Enter the value of d " << endl;
        cin >> d;
    }
    void display2()
    {
        cout << "The value of cos(c) is : " << cos(c) << endl;
        cout << "The value of sin(c) is : " << sin(c) << endl;
        cout << "The value of cos(d) is : " << cos(d) << endl;
        cout << "The value of sin(c) is : " << sin(c) << endl;
    }
};

class HybridCalculator : public SimpleCalculator, public ScienticCalculator
{
};
int main()
{
    SimpleCalculator cal1;
    cal1.getvalue1();
    cal1.display1();

    ScienticCalculator cal2;
    cal2.getvalue2();
    cal2.display2();

    HybridCalculator cal3;
    cal3.getvalue1();
    cal3.display1();
    cal3.getvalue2();
    cal3.display2();
    return 0;
}