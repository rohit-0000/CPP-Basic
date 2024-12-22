#include<iostream>
#include<iomanip>
using namespace std;
//STRUCTURE : THe  structure is a user-defined data type that is available in c++.Structure are used to combine different types of
// data types, just like an array is used to combine the same type of data types.
typedef struct employee
{
    int Id;
    char favchar;
    float salary;
}ep;          // 'typedef'-->>we have used a keyword “typedef” before struct and after the closing bracket of structure, we have 
//written “ep”. Now we can create structure variables without using the keyword “struct” and name of the struct
//(i.e We use 'ep harry'instead of 'struct employee harry'). 





// UNION: Union are similar to structures but provide better memory management.
// unions use shared memory so only 1 variable can be used at a time.
union worker
{
    int id;
    char grade;
    float payment;
};

int main()
{
    cout<<"STRUCTURE"<<endl;
    ep harry;
    harry.Id=1;
    harry.favchar='c';
    harry.salary=1340000000000;
    cout<<"Harry id is :                 "<<setw(6)<<harry.Id<<endl;
    cout<<"Harry favorite character is : "<<setw(6)<<harry.favchar<<endl;
    cout<<"Harry salary is :             "<<setw(6)<<harry.salary<<endl<<endl;
 
    ep rohan;
    rohan.Id=2;
    rohan.favchar='n';
    rohan.salary=250000;
    cout<<"rohan id is :                 "<<setw(6)<<rohan.Id<<endl;
    cout<<"rohan favorite character is : "<<setw(6)<<rohan.favchar<<endl;
    cout<<"rohan salary is :             "<<setw(6)<<rohan.salary<<endl<<endl<<endl;


    cout<<"UNIONS"<<endl;
    union worker golu,l;
    golu.id=67;  
    cout<<"only one variable used at a time.";
    cout<<"The golu id is : "<<golu.id<<endl<<endl<<endl;


    cout<<"ENUMS"<<endl;
    //ENUMS:  Enums are user-defined types which consist of named constants. Enums are used to make the program more readable. 
    enum meal{breakfast, lunch,dinner};
    cout<<"The value of breakfast is : "<<breakfast<<endl;
    cout<<"The value of lunch is : "<<lunch<<endl;
    cout<<"The value of dinner is : "<<dinner<<endl;
    meal m1=lunch;
    cout<<"The value of (m1==1) is "<<(m1==1);
    return 0;
}