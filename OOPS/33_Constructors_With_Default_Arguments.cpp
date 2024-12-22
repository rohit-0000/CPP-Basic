#include <iostream>
using namespace std;
class simple
{
    int a, b, c;

public:
    simple(int x, int y = 7, int z = 8)
    {
        a = x;
        b = y;
        c = z;
    }
    void printnumber();
};
void simple ::printnumber()
{
    cout << "The value of a is " << a << endl;
    cout << "The value of b is " << b << endl;
    cout << "The value of c is " << c << endl;
}
int main()
{
    simple o1( 2 , 45 );
    o1.printnumber();
    return 0;
}

// The constructor assigned the values “2” and “45” to the variables “x” and “y” but the value for the variable “z” was not passed
// that’s why constructors set the value “8” which was the default value for the variable “z”.