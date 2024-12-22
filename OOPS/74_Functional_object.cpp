// website where all map function mentioned->https://en.cppreference.com/w/cpp/utility/functional
#include <iostream>
#include <functional>
#include<algorithm>

using namespace std;
int main()
{
    // Function Object : Function Wrapped in a class so that it available like an object
    int arr[] = {3, 54, 7, 58, 9, 56, 8};
    //in assending order
    cout<<"In assending order"<<endl;
    sort(arr, arr + 6);
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << endl;
    }
    //in desending order
    cout<<"In desending order"<<endl;
    sort(arr, arr + 6,greater<int>());
        for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
}

/*
#include <iostream>
using namespace std;
int main()
{
    int a[] = {23, 4, 54, 87, 9};
    int i,j,k;
    for(i=0;i<5;i++)
    {
        for(j=i;j<5;j++)
        {
            if(a[i]>a[j])    // assending 
            if(a[i]<a[j])    // desending
            {
                k=a[i];
                a[i]=a[j];
                a[j]=k;
            }
        }
        cout<<a[i]<<endl;
    }
   return 0;
}
*/