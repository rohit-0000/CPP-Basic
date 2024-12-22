// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int x;      //iteration 1
//     cin>>x;     //iteration 2
//     cout<<x*x;  //iteration 3
//     return 0;
// }
//no.of iteration = 3
// time complexity is denoted by O(n) .i.e here O(3)

//online coding website limits:
//No. of iteration in 1 sec = 10^7 --  10^8
// i.e  10^7 = 1 sec
//      10^8 = 10 sec
//      10^9 = 100 sec ...

//eg:-
/*
    
#include<bits/stdc++.h>
using namespace std;
int main()
{
    // n < 1e5
    // a[i]< 1e5
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    return 0;
}        // here time complexity = O(1) + O(1) + O(1) + O(n) = O(n) = 1e5  
//   i.e code will run
*/

/*
#include<bits/stdc++.h>
using namespace std;
int main()
{
    // n<1e5
    int n;
    cin>>n;
    int b[n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;i<n;j++)
        cin>>b[i];
    }
    return 0;
} // time complexity = O(1) + O(1) + O(1) + O(n*n) = O(n*n) = 1e5 * 1e5 = 1e10 
//i.e code will show time limit excideed.
*/

/*
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ct=0;
    while(n>0)
    {
        n/=2;            // no.of iteration in loop :  a(suppose)
        ct++;            // 2^a=n => log(2^a)=log(n) => a*log2=log(n) => a=log(n)
    }
    return 0;
}  // here time complexity = O(1)+O(1)+O(1)+O(log(n))=O(log(n))
// if(n<1e18)  it will not work in normal loop (but)
 // here time complexity= O(log(n))=O(log(1e18))=O(18*log10)=O(18*3.32)=O(59.76)
 // here code run smothly because complexity= O(59.76)