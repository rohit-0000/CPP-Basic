#include <iostream>
using namespace std;
int main()
{
    // ASSIGNMENT OPERATOR:-->It is used to assign value to variable.
    int a = 34;
    a += 5;
    // a+=5 means ( a + 5 ) and its value = 34+5=39 i.e {a=39}

    float b = 8.98;
    b -= 0.98;
    // b-=0.98 means (b-0.98) and its value =8.98-0.98=8

    // operotor    example        same as
    //     =	    x = 5	       x = 5
    //    +=	    x += 3         x = x + 3
    //    -=	    x -= 3	       x = x - 3
    //    *=	    x *= 3	       x = x * 3
    //    /=	    x /= 3	       x = x / 3
    //    %=	    x %= 3	       x = x % 3
    //    &=	    x &= 3	       x = x & 3
    //    |=	    x |= 3	       x = x | 3
    //    ^=	    x ^= 3	       x = x ^ 3
    //    >>=	    x >>= 3	       x = x >> 3
    //    <<=	    x <<= 3	       x = x << 3

    cout << "the value of a+b is " << a + b;
    return 0;
}
