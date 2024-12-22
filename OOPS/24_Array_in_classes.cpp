/*  OBJECTS MEMORY ALLOCATION IN C++


The way memory is allocated to variables and functions of the class is different even though they both are from the same class.
The memory is only allocated to the variables of the class when the object is created. The memory is not allocated to the variables
 when the class is declared. At the same time, single variables can have different values for different objects, so every object 
 has an individual copy of all the variables of the class. But the memory is allocated to the function only once when the class is 
 declared. So the objects don’t have individual copies of functions only one copy is shared among each object.       */



#include <iostream>
using namespace std;
class shop
{
    int itemId[100];
    int itemPrice[100];
    int counter;

public:
void initcounter(void){counter=1;}
void setPrice(void);
void displayPrice(void);
};
void shop::setPrice(void){
    cout<<"Enter Id of your item no "<<counter<<endl;
    cin>>itemId[counter];

    cout<<"Enter Price of your item "<< endl;
    cin>> itemPrice[counter];
    counter++;
    cout<<endl<<endl;
}
void shop::displayPrice(void)
{
    for(int i=1;i<counter;i++)
    {
        cout<<"The Price of item with id "<<itemId[i]<<" is "<<itemPrice[i]<<endl;

    }
}

int main()
{
    shop dukaan;
    dukaan.initcounter();
    // dukaan.setPrice();
    dukaan.setPrice();
    dukaan.setPrice();
    dukaan.setPrice();
    dukaan.displayPrice();
}