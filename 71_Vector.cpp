// website where all vector function mentioned //https://cplusplus.com/reference/vector/vector/
#include<iostream>
#include<vector>
using namespace std;
 //--------------------------------------------------------------------------------------

template<class T>
void display(vector<T> &v)
{
    cout<<"Displaying This vector"<<endl;
    for(int i =0;i< v.size();i++)
    {
        cout<<v[i]<<",";
        // cout<<v.at(i)<<",";   // Same at above 
    }
}
 //--------------------------------------------------------------------------------------
int main()
{
    // Way to create a vector 
    vector<int> vec1;    // zero length integer vector
    int element, size;
    cout<<"Enter the size of your vector"<<endl;
    cin>>size;
    for(int i=0; i<size; i++)
    {
        cout<<"Enter an element to add to this vector: ";
        cin>>element;
        vec1.push_back(element);   // push_back --> Add element at the end.
    }    
//----------                                                 --------------------------
    display(vec1);
    cout<<endl;
//--------------------------------------------------------------------------------------

    vec1.pop_back();     // Delete last element             
    display(vec1);

//--------------------------------------------------------------------------------------
 
    vector<int> :: iterator iter = vec1.begin();     // begin->Return iterator to beginning
    vec1.insert(iter+1,67,566);           // print 566 at 2nd place sixtyseven times
    display(vec1);
    cout<<endl;

//--------------------------------------------------------------------------------------

    vector<char> vec2(4);    // 4-element character vector
    vec2[0]='9';
    vec2[1]='o';
    vec2[2]='g';
    vec2[3]='h';
    vec2.push_back('7');   //Print 7 at the end of vec2
    display(vec2);
    cout<<endl;

//--------------------------------------------------------------------------------------
    
    vector<char> vec3(vec2);  // 4-element character vector from vec2
    display(vec3); 
    cout<<endl; 

//--------------------------------------------------------------------------------------
   
    vector<int> vec4(8,17);  // 8-element vector of 17.[i.e->Print '17' eight times] 
    display (vec4);
    cout<<"\nSize of vec4 :="<<vec4.size();   //Display how many time 17 will be print

    return 0;
}

 //--------------------------------------------------------------------------------------
