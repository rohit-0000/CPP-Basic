//-----------------------------------------------------------------------
//A destructor is a type of function which is called when the object is destroyed. 
//Destructor never takes an argument nor does it return any value. 

//-----------------------------------------------------------------------
#include<iostream>
using namespace std;
//-----------------------------------------------------------------------
int count=0;
//-----------------------------------------------------------------------
class num
{
    public:
    void display(){cout<<"hgdf\n";}
    num(){
    count++;
    cout<<"This is the time when constructor is called for the object number "<<count<<endl;
    }
    ~num()
    {
        cout<<"This is the time when destructor is called for the object number "<<count<<endl;
        count--;
    }
};
//-----------------------------------------------------------------------
int main()
{
    cout<<"We are inside our main function "<<endl;
    cout<<"Creating aur first object"<<endl;
    num n1;
    {
        cout<<"Entering this block"<<endl;
        cout<<"Creating  two more objects"<<endl;
        num n2,n3;}
        cout<<"Exiting this block"<<endl;
    // }
    cout<<"Back to main menu"<<endl;
    
    
    return 0;
}