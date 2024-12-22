#include<iostream>
#include<fstream>

/*
The useful classes for working with files in C++ are:
1. fstreambase
2. ifstream --> derived from fstreambase
3. ofstream --> derived from fstreambase
*/

// In order work with files in C++,you will have to open it.Primarily, there are 2 ways to open a file:
// 1. using the constructor
// 2. using the member function open() of the class

using namespace std;

int main()
{
    // Opening files using constructor and writing it.

    string st ="I am learnig to write a file.";
    ofstream out ("60_sample_01.txt");  //write operation
    out<<st;
    
    // opening files using constructor and reading it

    string st1,st2;
    ifstream in("60_sample_02.txt");  //Read Operation

    // in>>st1>>st2;     //->This will read only one word
    // cout<<st1<<st2;   //->THis will read 1st 2 word

    getline(in,st1); //This will read 1st whole line
    getline(in,st2); //This will read 2nd whole line
    cout<<st1<<st2;

    return 0;
}