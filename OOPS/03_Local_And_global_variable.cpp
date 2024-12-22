# include<iostream>
using namespace std;
//-------------------------------------------
int glo = 6;//---global variable
//-------------------------------------------
void sum(){
    int glo=8092; //---local variable
    cout<<"The number is "<< glo;
    }
//-------------------------------------------

int main(){
    int glo=9;
    glo=851068;      //---local variable
    sum();
    cout<<glo;

    return 0;
}
