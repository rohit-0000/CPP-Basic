#include<iostream>

using namespace std;
int main()
{
    //String Concatenation --->>The + operator is used between strings to add them together to make new string.
    string firstname="abhinav";
    string lastname ="anand";
    string fullname=firstname+lastname;
    cout<<fullname<<endl;
    // cout=abhinav anand

    //number  and string
    string a="20";
    string b="56";
    cout<<a+b<<endl;//cout=2056

    //String length
    string A="gdsersdjfdfdfdfguktrhesdfyikgrsdasx";
    cout<<"The length of A is "<<A.length()<<endl;
    
    //Acess STRing
    string mystring ="Hello";
    cout<<"first letter of mystring is :"<<mystring[0]<<endl;
    cout<<"second letter of mystring is :"<<mystring[2]<<endl;
    cout<<"fourth letter of mystring is :"<<mystring.at(4)<<endl;
    mystring[1]='j';
    cout<<mystring<<endl;

    string name;
    cout<<"ENTER THE NAME\n";
    getline(cin,name);
    cout<<"my name is "<<name<<endl;





    //Shorthand if else
    int age;
    cout<<"Enter your age"<<endl;
    cin>>age;
    string result=(age<18)? "you are not allowed to enter" : "you are welcome";
    cout<<result<<endl;

    //stoi() FUNCTION ->it convert string into int.
    string S1="34";
    int S1_convert=stoi(S1);
    cout<<"\n "<<stoi(S1)<<endl;
    cout<<S1_convert<<endl;

    string s1="Apples are red";
    string r=s1.substr(11,3);
    cout<<r<<endl;
    cout<<s1[3]<<endl;
    cout<<s1[2]<<endl;
    return 0;
}