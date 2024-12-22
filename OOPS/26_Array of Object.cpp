#include<iostream>
using namespace std;
class Employee
{
    int id;
    int salary;

public:
void setid(void)
{
    salary=122;
    cout<<"Enter the id of the  employee "<<endl;
    cin>>id;
}
void getid(void)
{
    cout<<"The id of this employee is "<<id<<endl;
}
};
int main()
{
    Employee fb[4];
    for(int i=0; i<4;i++ )
    {
        fb[i].setid();
        fb[i].getid();
    }
    
    return 0;
}