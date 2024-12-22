#include <iostream>
using namespace std;
class employee
{
    int id;
    int salary;
    static int count;//default value=0
    //When a static method is created, they become independent of any object and class. Static methods can only access
    // static data members and static methods. Static methods can only be accessed using the scope resolution operator.

public:
    void setdata()
    {
        cout << "Enter Id of " << count << " employee " << endl;
        cin >> id;
        cout << "Enter salary of " << count << " employee" << endl;
        cin >> salary;
        count++;
    }
    void getdata()
    {

        cout << "Id of " << count << " employee : " << id << endl;
        cout << "Salary of " << count << " employee : " << salary << endl;
    }
    static void getcount(void)
    { // cout<<id;  //     throws an error.-----> static function uses only static members
        cout << "The value of count is " << count<<endl<< endl<< endl;
    }
};

// count is the static data member of class Employee
int employee::count = 1; // default value is 0
int main()
{
    employee ram, aman, rohan;
    // harry.id=1;
    // harry.count=1;  // cannot do this as id and count is privvate
    ram.setdata();
    ram.getdata();
    employee::getcount();

    aman.setdata();
    aman.getdata();
    employee::getcount();

    
    rohan.setdata();
    rohan.getdata();
    employee::getcount();
    return 0;
}