#include <iostream>
using namespace std;
class CWH
{
protected:
    string title;
    float rating;

public:
    CWH(string s, float r)
    {
        title = s;
        rating = r;
    }
    virtual void display(){}
};

class CWHvideo : public CWH
{
    float videolength;

public:
    CWHvideo(string s, float r, float v1) : CWH(s, r)
    {
        videolength = v1;
    }
    void display()
    {
        cout << "This is an amazing video tutorial " << endl;
        cout << "Rating of the video is : " << rating << " out of 5 stars" << endl;
        cout << "Length of video is " << videolength << "minutes" << endl<<endl;
    }
};

class CWHtext : public CWH
{
    int words;

public:
    CWHtext(string s, float r, int cw) : CWH(s, r)
    {
        words = cw;
    }
    void display()
    {
        cout << "This is an amazing text tutorial " << endl;
        cout << "Rating of the text tutorial is :" << rating << " out of 5 stars" << endl;
        cout << "No of words is : " << words << " words" << endl<<endl;
    }
};

int main()
{
    string title;
    float videolength, rating;
    int words;

    // for code with harry video
    title = "Django tutorial";
    rating = 4.89;
    videolength = 4.56;
    CWHvideo djvideo(title, rating, videolength);

    // for code with harry video text
    title = "Django titorial text ";
    rating = 4.19;
    words = 433;
    CWHtext djtext(title, rating, words);

    // djvideo.display();
    // djtext.display();

    // OR

    CWH *tuts[2];
    tuts[0] = &djvideo;
    tuts[1] = &djtext;

    tuts[0]->display();
    tuts[1]->display();

    return 0;
}

/*
RULES FOR VIRTUAL FUNCTION
1.They cannot be static
2.They are accessed by object pointers 
3.Virtual function can be a friend of another class 
4.A Virtual function in a base class might not be used.
5.If virtual function is is defined in a base class , there is no neccessity of redefining it in thhe derived class
i.e if display function of "CWHtext" class is not defined then it use display function of CWH(base) class. 
*/