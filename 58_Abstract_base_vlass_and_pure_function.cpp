/*
ABSTRACT BASE CLASS IN C++
>Abstract base class is a class that has at least one pure virtual function in its body.
>this is made to be inherite.
>The classes which are inheriting the base class must need to override the virtual function of the abstracted class otherwise complier will throw an error.

PURE VIRTUAL FUNCTION IN C++
>pure virtual function is a function that does not perform any operation and the function was function is declared by assigning the value 0 to it.
>pure function are declared in abstract classes.

*/

#include<iostream>
using namespace std;
class CWH
{
    protected:
    string title;
    float rating;
    public :
    CWH(string s,float r)
    {
        title = s;
        rating =r;
    }
    virtual void display()=0;
};

class CWHvideo : public CWH
{
    float videolen;
    public:
    CWHvideo(string s,float r,float v1):CWH(s,r)
    {
        videolen =v1;
    }
    void display()
    {
        cout<<"This is amazing video tutorial"<<endl;
        cout<<"Rating of this tutorial is : "<<rating<<" out of 5 stars"<<endl;
        cout<<"Length of the video is "<<videolen<<endl<<endl;
    }
};

class CWHtext :public CWH
{
    int words;
    public:
    CWHtext(string s,float r,int w):CWH(s,r)
    {
        words=w;
    }
    void display()
    {
        cout<<"This is an amazing text tutorial "<<endl;
        cout <<"Rating of the text tutorial : "<<rating<<" out of 5 stars"<<endl;
        cout <<"No of words in text tutorial : "<<words<<endl<<endl;
  }
};

    int main()
{
    string s;
    float r,v1;
    int w;

    s="django tutorial ";
    r=4.98;
    v1=5.6;
    CWHvideo djvideo( s, r, v1);  

    s="django tutorial text";
    r=4.5;
    w=433;
    CWHtext djtext(s,r,w);

    CWH*tuts[2];
    tuts[0]= &djvideo;
    tuts[1]= &djtext;

    tuts[0]->display();
    tuts[1]->display();

    return 0;
}