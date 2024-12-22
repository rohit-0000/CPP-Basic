#include<iostream>
using namespace std;
int main()
{
                          /* Loops structure:
                    There are 3 types of loops in c++
                     1. For loop
                     2. While loop
                     3. do-while loop
*/
//                                                            ********************** For loop********************




// int a=1;
// cout<<a<<endl;            }----------->repeat this for print 1-100.
// a++;

/*syntax of 'for loop':
for(initialisation;condition;updation)
{
    loop body(c++ code)
}*/

cout<<"For loop"<<endl<<endl;

cout<<"COUTING OF 1-100 IS:"<<endl;
for(int a=0;a<=100;a++)
{
    cout<<a<<endl;
}
cout<<endl<<endl;



//Code of 'infite for loop.' : if condition is always true

// for(int b=1;b>0;b++)
// {
//     cout<<b<<endl;
// }


//                                                        ****************************while loop****************



//SYNTAX OF WHILE LOOP:
// while ( condition )
// {
//     code 
//   upgradation
// }



cout<<"while loop:\n";
int c=1;
while(c<45)
{
    cout<<c<<endl;
    c++;

    }

//Code of 'Infinte while loop.'

// int d=1;
// while(d>0)
// {
//     cout<<d<<endl;
//     d++;

 
cout<<endl<<endl;

//                                                 *****************************do-while loop****************************

// syntax of 'do while loop':
// do
// {
//      code 
// } 
//while ( condition );

cout<<"do while loop\n\n\n";
cout<<"first value always printed\n\n";
int e=1;
do
{
    cout<<e<<endl;
    e++;
}
while(e<45);

return 0;
}
