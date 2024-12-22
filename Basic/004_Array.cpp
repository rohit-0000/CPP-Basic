#include<bits/stdc++.h>
using namespace std;
//variable which is outside to the main() function is called global variable
const int checkg=1e7;
int szarrg[checkg];
int main()
{
    // sum of number in array
    int size;
    int sum=0;
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++)
    {
    cin>>arr[i];
    sum=sum+arr[i];
    }
    cout<<sum<<endl;
/*
        2D Array
        int a[3][2] = array having 3 row and 2 column
                eg [2 ,5]
                   [4 ,6]
                   [9 ,3]
    a[2][0]=9 , a[1][1]=6 ,a[0][1]=5
*/
    int r,c;
    cin>>r>>c;
    int tdarr[r][c];
    for(int i=0;i<r;i++)
    for(int j=0;j<c;j++)
    cin>>tdarr[i][j];
    
    for(int i=0;i<r;i++)
    {
    for(int j=0;j<c;j++)
    cout<<tdarr[i][j]<<" ";
    cout<<endl;
    }
    /*
    SIZE OF AN ARRAY
    locally--> size must be less than equal to 1e5  (here data store in stack memory which has size limit generally 8 mb that's why it can only store upto 1e5)
    globally --> size may be upto 1e7   (here data store in DATA segment thats,why it store upto 1e7)
    */
    int check=1e5; // if (1e5 < check <=1e7 ) then it show segmentation error.
    int szarr[check];
    szarr[check-1]=98;
    cout<<szarr[check-1]<<endl;

    //
    szarrg[checkg-1]=100; //it doesnot show error because it is declared globally
    cout<<szarrg[checkg-1];
    return 0;
}