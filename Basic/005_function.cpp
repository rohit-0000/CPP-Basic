#include<bits/stdc++.h>
using namespace std;
void print_hello()
{
    cout<<"hello world"<<endl;
}


int sum (int a,int b)
{
return a+b;
}


int sum_digit(int n)
{
    int sum=0;
    while(n>0)
    {
        sum=sum+n%10;
        n/=10;
    }
    return sum;
}

//CALL BY VALUE  :- it does able to swap in main function because it take copy of a and b
void swap1(int a,int b)
{
    int temp=a;
    a=b;
    b=temp;
}

// CALL BY REFERENCE
void swap2(int &a,int &b)
{
    int temp=a;
    a=b;
    b=temp;
}

// CALLING A ARRAY
void arrcall(int arr[])   // here not necessary to put size of array in 1D array, directly we can access
{
    arr[0]=78;
}
void tdarrcall(int tdarr[][7])   // here we can skip row but not column . i.e we must have to put size of array except 1st in n-D array
    /* 
    void tdarrcall(int m,int tdarr[][m])   it is not valid way to declare array
    to take size in 2d array we can declare whole array globally with size is largest given value(constrain),it is valid only in competitive programming 
    */
{
    tdarr[0][0]=70;
}

// CALLING BY POINTERS
void swap3(int *x,int *y)
{
    int temp=*x;
    *x=*y;
    *y=temp;
}

int main()
{

    print_hello();
    int a,b;
    cin>>a>>b;
    cout<<sum(a,b)<<endl;
    cout<<sum_digit(a)<<endl;
    // digit sum of number a and b
    cout<<sum_digit(a)+sum_digit(b)<<endl;

    //SWAPPING OF TWO NUMBER
    // PASS BY VALUE 
        swap1(a,b);
        cout<<"a="<<a<<endl<<"b="<<b<<endl;
    // PASS BY REFERENCE
        swap2(a,b);
        cout<<"a="<<a<<endl<<"b="<<b<<endl;
    // INBUILT FUNCTION FOR SWAPPING
        swap(a,b);
        cout<<"a="<<a<<endl<<"b="<<b<<endl;

    // PASSING OF ARRAY
    //NOTE: Array always pass by reference. eg:
    int arr[10];
    arr[0]=23;
    cout<<"arr[0]="<<arr[0]<<endl;
    arrcall(arr);
    cout<<"arr[0]="<<arr[0]<<endl;
    //2D array passing
    int tdarr[10][7];
    tdarr[0][0]=56;
    cout<<"tdarr[0][0]="<<tdarr[0][0]<<endl;
    tdarrcall(tdarr);
    cout<<"tdarr[0][0]="<<tdarr[0][0]<<endl;

    // Passing by pointer
    int x=56,y=32;
    swap3(&x,&y);
    cout<<"x="<<x<<endl<<"y="<<y<<endl;
    return 0;   // it means code execution have been completed sucessfully. 
}