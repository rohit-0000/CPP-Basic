// CONSTRUCTORS IN DERIVED CLASS 
//--------------------------------------------------------------------------
/*
Constructors In Derived Class
    > We can use Constructors in derived classes
    > If the base class Constructor does not have not have any arguments, there is 
    no need for any Constructor in the derived class.
    > But if there are one or more arguments in the base class constructor ,derived
      class need to pass argument to the base class constructor
    > If both base and derived classes have constructor ,base class constructors,is 
      executed first.

//--------------------------------------------------------------------------

Constructors in Multiple Inheritances
    > In multiple inheritances, base classes are constructed in the order in which
     they appear in the class deceleration. For example if there are three 
     classes “A”, “B”, and “C”, and the class “C” is inheriting classes “A” and “B”. 
     If the class “A” is written before class “B” then the constructor of class “A” will
     be executed first. But if the class “B” is written before class “A” then 
     the constructor of class “B” will be executed first.  

    >In multilevel inheritance,the constructors are executed in the order of inheritance.
     For example if there are three classes"A","B"and "C", and the class "B" is inheriting 
     classes "A" and the class "C" is inheriting classes "B". Then the constructor will run 
     according to the order of inheritance such as the constructor of class "A" will be called 
     first then the constructor of class "B" will be called and at the end constructor of class "C"
     will be called.

//--------------------------------------------------------------------------

Special Syntax
    > c++ supports a special syntax for passing arguments to multiple base classes. 
    > The construntor of the derived class receives all the arguments at once and then will pass 
      the call to the respective base classes.
    > The body is called after the constructors is fnished executing.   
*/

//--------------------------------------------------------------------------

//SYNTAX EXAMPLE
// Derived-Constructor (arg1, arg2, arg3….): Base 1-Constructor (arg1,arg2), Base 2-Constructor(arg3,arg4)
// {
// ….
// } Base 1-Constructor (arg1,arg2)

//--------------------------------------------------------------------------
/*
Special Case of Virtual Base Class

The constructors for virtual base classes are invoked before a non-virtual base class
If there are multiple virtual base classes, they are invoked in the order declared
Any non-virtual base class are then constructed before the derived class constructor is executed
*/
//--------------------------------------------------------------------------