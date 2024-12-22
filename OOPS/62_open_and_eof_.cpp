#include<iostream>
#include<fstream>
#include<string>

using namespace std;
int main()
{
    string s1="rahul is cool___";
    // ofstream out("60_sample_01.txt");
    // or
    ofstream out1;
    out1.open("60_sample_01.txt");
    out1<<s1;
    out1.close();

    string s2,s3;
    ifstream in;
    in.open("60_sample_02.txt");

    // in>>s2>>s3;
    // // cout<<s2; //this will print only one word
    // cout<<s2<<" "<<s3;  //this will print two word

    while(in.eof()==0)
    {
        getline(in,s2);  //->This will print whole page.
        cout<<s2;
    }
    
    in.close();
    
    return 0;
}