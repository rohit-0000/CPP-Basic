//strings

// if we have to deal with with large number like 10^100 then we deal with string and its ASCII value 

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     string s,s1;
//     // cin >>s>>s1;  // it take input until space comes
//     getline(cin,s);
//     getline(cin,s1); // it take input as whole line until enter comes
//     cout<<s<<endl<<s1;
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        string s;
        getline(cin,s);//it also takes space as input that's why we use {cin.ignore()} function to work normally like cin 
        // cin>>s;
        cout<<s<<endl;
    }
    return 0;
}