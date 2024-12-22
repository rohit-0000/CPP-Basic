#include<iostream>
#include<fstream>

using namespace std;
int main()
{
    // Connecting our file with hout stream
    ofstream hout("60_sample_01.txt");

    // Creating a name string variable and filling it with string entered by the user
    string name;
    cout<<"Enter your name "<<endl;
    cin>>name; 

    //writting a string to the file
    hout<<"My name is "<<name+".";

    //Disconnecting our files
    hout.close();

    //Connecting our file with hin stream
    ifstream hin("60_sample_01.txt");

    //creating a content string variable and filling it with string present there in the text file
    string content;
    // hin>>content;   // it will read only a word
    getline(hin,content); //it will real a line
    
    cout<<"The content of the file is :"<<endl<<content;
    hin.close();
    return 0;
}