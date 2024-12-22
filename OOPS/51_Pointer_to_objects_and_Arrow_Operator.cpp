// // Pointers to Objects and Arrow Operator
// /*
// Pointers are used to store addresses of variables which have
// data types like int, float,doubles,etc.But pointer can also store the adress of an object.
// */

#include <iostream>
using namespace std;
class complex
{
    int real, imaginary;

public:
    void setdata(int a, int b)
    {
        real = a;
        imaginary = b;
    }
    void getdata()
    {
        cout << "The value of real part of complex number is :" << real << endl;
        cout << "The value of imaginary part of complex number is :" << imaginary << endl;
    }
};
int main()
{
    // complex c1;
    // c1.setdata(1,54);
    // c1.getdata();

    // complex c1;
    //  complex* ptr = &c1;
    //  (*ptr).setdata(1,54);
    //  (*ptr).getdata();

    complex *ptr = new complex;
    //(*ptr).setdata(1,54); is exactly same as
    ptr->setdata(1, 54);
    // (*ptr).getdata(); is exactly same as
    ptr->getdata();

    /*
    [All three above method will print same ]
    */

    // Array of objects
    cout << endl
         << "--------------------------------------------------" << endl
         << endl;
    complex *ptr1 = new complex[4];
    ptr1->setdata(1, 4);
    (ptr1+1)->setdata(2, 6);
    ptr1->getdata();
   ( ptr1+1)->getdata();
}