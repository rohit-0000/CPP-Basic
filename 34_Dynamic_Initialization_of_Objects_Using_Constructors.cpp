//The dynamic initialization of the object means that the object is initialized at the runtime.
//  Dynamic initialization of the object using a constructor is beneficial when the data is of different formats




#include<bits/stdc++.h>
using namespace std;
class bankdeposite
{
    float principle;
    float year;
    float rate;
    float returnvalue;
    public:
    bankdeposite(){}
    bankdeposite(float p,float t,float r);
    bankdeposite(float p,float t,int R);
    void show();
    
};
bankdeposite::bankdeposite(float p,float t, float r)
{
    principle=p;
    year=t;
    rate=r;
    returnvalue=principle;
    for(int i=0;i<t;i++)
    {
        returnvalue=returnvalue*(1+r);
    }
}
bankdeposite::bankdeposite(float p,float t, int r)
{
    principle=p;
    year=t;
    rate=r;
    returnvalue=principle;
    for(int i=0;i<t;i++)
    {
        returnvalue=returnvalue*(1+float(r)/100);
    }
}
void bankdeposite::show()
{
    cout<<"The principle amount is "<<principle<<endl<<"The rate of intrest is "<<rate<<endl<<"The time for amount deposite is "<<year<<endl<<endl;
    cout<<"The amount return after "<<year<<" years is "<<returnvalue<<endl<<endl<<endl;
}
int main()
{
    bankdeposite bd1,bd2,bd3;
    float p;
    float t;
    float r;
    int R;

    
    cout<<"Enter your amount to deposite " <<endl;
    cin>>p;
    cout<<"Enter the time of investment "<<endl;
    cin>>t;
    cout<<"Enter the rate of interset"<<endl;
    cin>>r;
    bd1=bankdeposite(p,t,r);
    bd1.show();


    cout<<"Enter your amount to deposite " <<endl;
    cin>>p;
    cout<<"Enter the time of investment "<<endl;
    cin>>t;
    cout<<"Enter the rate of interset"<<endl;
    cin>>R;
    bd2=bankdeposite(p,t,R);
    bd2.show();



    
    return 0;
}


// the main thing to note here is that the compiler figures out the run time by seeing the data type and runs the relevant constructor.