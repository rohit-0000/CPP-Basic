/*
( a + b ) % m = ((a % m) + (b % m)) % m
( a * b ) % m = ((a % m) * (b % m)) % m
( a - b ) % m = ((a % m) - (b % m) + m) % m
( a / b ) % m = ((a % m)*(b^-1) % m) % m
*/

/*
Given a number N. Print its Factorial.
constrains
1 <= N <= 100
Print answere in modulo M
where M=47
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,M=47;
    cin>>n;
    long long fact=1;
    for(int i=1;i<=n;i++)
    {
    fact=(fact*i)%M;  
    }
    cout<<fact;
    return 0;
}

// 1e9 + 7 :
/*
very closed to maximum int 
it is a prime no.
MMI : modular multiplicative inverse is possible for this no .(we will study later about  MMI )
 */