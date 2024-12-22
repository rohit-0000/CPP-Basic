    //comment is not read by code runner.
    //this is single line comment 
    /*     this is multi line comment 
    and shortcut is "first select" and then "ctrl+ /"    */

#include<iostream>
using namespace std;
int main (){
//*********************VARIABLE*********************
    int a=34;
    int b=-91;
    //or int a=34 , b=-91;
    float z=7.89f, y=-9.8f;
    char mx='o', n='t';
    bool m=true;
    double g=3.9;

    cout<<"the value of a is "<<a<<".\nthe value of b is "<<b<<".";
    cout<<"\nthe value of z is "<<z<<".\nthe value of y is "<<y<<".";
    cout<<"\nthe value of g is "<<g<<".";
    cout<<"\nthe value of mx is "<<mx<<".\nthe value of n is "<<n<<m<<".";

    cout<<"\nthe size of g is : "<<sizeof(3.9l);
    cout<<"\nthe size of z is : "<<sizeof(7.89f);


    return 0;
}