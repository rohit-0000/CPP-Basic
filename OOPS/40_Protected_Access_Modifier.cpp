#include<bits/stdc++.h>
using namespace std;

class Base
{
    protected:
    int a;
    private:
    int b;
};

/*
For a protected member:
                                    Public derivation        private Derivation                     Protected Derivation
    1. Private members              Not Inheritance          Not Inheritance                        Not Inheritance
    2. Protected members            Protected                private                                Protected
    3. Public members               public                   private                                Protected                              
*/
class Derived:protected Base
{

};
int main()
{
    Base b;
    Derived d;
    //cout<<d.a;    // Will not work since a is protected in both base as well as derived class.
    return 0;   
    return 0;
}