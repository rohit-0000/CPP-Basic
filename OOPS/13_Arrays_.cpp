#include <iostream>
using namespace std;
int main()
{
    // Array:- An array is a collection of items which are of the similar type stored in contiguous memory location.
    //>>Sometimes , a simple variable is not enough to hold all the data.
    // ARAY EXAMPLE:
    int marks[5] = {21, 34, 56, 78, 98};
    cout << "These are marks" << endl;
    cout << "The marks [0] is " << marks[0] << endl;
    cout << "The marks [1] is " << marks[1] << endl;
    cout << "The marks [2] is " << marks[2] << endl;
    cout << "The marks [3] is " << marks[3] << endl;
    cout << "The marks [4] is " << marks[4] << endl;

    cout << endl;

    int mathmarks[] = {78, 98, 67, 58, 47, 36, 98, 99};
    mathmarks[6] = 889; // we can change the value of array.
    cout << "These are mathmarks" << endl;
    cout << "The mathmarks[0] is " << mathmarks[0] << endl;
    cout << "The mathmarks[1] is " << mathmarks[1] << endl;
    cout << "The mathmarks[2] is " << mathmarks[2] << endl;
    cout << "The mathmarks[3] is " << mathmarks[3] << endl;
    cout << "The mathmarks[4] is " << mathmarks[4] << endl;
    cout << "The mathmarks[5] is " << mathmarks[5] << endl;
    cout << "The mathmarks[6] is " << mathmarks[6] << endl;
    cout << "The mathmarks[7] is " << mathmarks[7] << endl;

    cout << endl;

    // ARAY example by loop  structure.
    cout << "These are mathmarks code by using loop structure " << endl;
    for (int a = 0; a < 8; a++)
    {
        cout << "The mathmarks [" << a << "] is " << mathmarks[a] << endl;
    }

    cout << endl;

    //********************************quiz: do the same using while and do-while loop.***************************

    // //ARAY example by while loop.
    // cout<<"These are marks code by using while structure "<<endl ;
    // int b=0;
    // while(b<5)
    // {
    // cout<<"The marks ["<<b<<"] is "<<marks[b]<<endl;
    // b+=1;
    // }

    // cout<<endl;

    // //ARAY example by do-while loop.
    // cout<<"These are marks code by using do-while structure "<<endl ;
    // int c=0;
    // do
    // {
    // cout<<"The marks ["<<c<<"] is "<<marks[c]<<endl;
    // c+=1;
    // }
    // while(c<5);

    cout << endl;
    //**********************Pointer And Array************************
    cout << "POINTER AND ARRAY" << endl;
    int *p = marks; //    p != &marks. ==> &marks ---> WRONG but  we can use for 2nd block.
                    //  marks--->adress of first block.
                    //  &marks[1]----------->adress of second block.
    cout << "The value of marks[0] is : " << *p << endl;
    cout << "The value of *p     is : " << *p << endl;
    cout << "The value of *(p+1) or marks[1] is : " << *(p + 1) << endl;
    cout << "The value of *(p+2) or marks[2] is : " << *(p + 2) << endl;
    cout << "The value of *(p+3) or marks[3] is : " << *(p + 3) << endl;
    cout << "The value of *(p+4) or marks[4] is : " << *(p + 4) << endl;
    
    cout << "The adress of marks[0] " << marks << endl;         // we can not use '&marks'or '&marks[0]'instead of this we use'marks'for adress.
    cout << "The adress of mathmarks[0] " << mathmarks << endl; // we can not use '&mathmarks'or '&mathmarks[0]'instead of this we use'mathmarks'for adress.
    cout << "The adress of marks[2] is :" << &marks[2] << endl;
    return 0;
}