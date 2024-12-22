#include <iostream>
using namespace std;
//---------------------------------------------------------------------------------------------------
int sum(int a, int b)
{
    int c = a + b;

}
//---------------------------------------------------------------------------------------------------
// CALL BY VALUE
//  This will not swap a and b because call by value only copy the actual parameter to the formal parameter
// So it does not affect the actual parameter 
void swap(int a, int b) // temp  a   b
{
    int temp = a; //  4    4   5
    a = b;        //  4    5   5
    b = temp;     //  4    5   4
}
//---------------------------------------------------------------------------------------------------
// Call by refrence using pointers
// This will swap because it passes the adress  from actual parameter to the formal parameter
void swapPointer(int *a, int *b) // temp  a   b
{
    // swap(a,b);
    int temp = *a; //  4    4   5
    *a = *b;       //  4    5   5
    *b = temp;     //  4    5   4
}
//---------------------------------------------------------------------------------------------------
// Call by reference using c++ reference variables int &
// This will swap because it passes the adress  from actual parameter to the formal parameter
void swapReferenceVariable(int &m, int &n) // temp  m   n
{
    int temp = m; //  4    4   5
    m = n;        //  4    5   5                                      
    n = temp;     //  4    5   4
}
//---------------------------------------------------------------------------------------------------
// return by reference
int &returnbyreference(int &m, int &n) // temp  m   n
{
    int temp = m; //  4    4   5
    m = n;        //  4    5   5                                      
    n = temp;     //  4    5   4
    return m;
}
int main()
{
    int x = 4, y = 5;
    cout << "THE SUM IS : " << sum(x, y) << endl;
    cout << "THE VALUE OF x IS : " << x << "\nTHE VALUE OF y IS :" << y << endl
         << endl;

    swap(x, y); // This will not swap.
    cout << "THE VALUE OF x IS : " << x << "\nTHE VALUE OF y IS :" << y << endl
         << endl;

    swapPointer(&x, &y); // This will swap
    cout << "THE VALUE OF x IS : " << x << "\nTHE VALUE OF y IS :" << y << endl
         << endl;

    swapReferenceVariable(x, y); // This will swap
    cout << "THE VALUE OF x IS : " << x << "\nTHE VALUE OF y IS :" << y << endl
         << endl;

    returnbyreference(x, y) =99; // This will swap
    cout << "THE VALUE OF x IS : " << x << "\nTHE VALUE OF y IS :" << y << endl
         << endl;
    return 0;
}