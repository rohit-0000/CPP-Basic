#include<iostream>
using namespace std;
int main()
{
    //-------------------------------->BREAK<-------------------------------------
    for(int a=5;a<50;a+=2)
    {
        if(a==15)                       
        {
            break;
        }
    cout<<a<<endl; 
    }

    cout<<endl<<endl;
 
//--------------------->.CONTINUE<-----------

    for (int i=0;i<=30; i+=2)
    {
        if(i==10)
        {
            continue;
        }
        cout<<i<<endl;
    }
    
    return 0;
}