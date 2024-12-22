// website where all map function mentioned ->https://cplusplus.com/reference/map/map/
// A map is an associative container which stores key value pairs.
#include <iostream>
#include <map>
#include <string>
using namespace std;
int main()
{
    map<string, int> marksmap;
    marksmap["Atul"] = 58;
    marksmap["Rohit"] = 57;
    marksmap["Kisna"] = 78;
    marksmap["Aditya"] = 65;
    marksmap["Sachin"] = 53;
    //Inserting in map
    marksmap.insert( { {"Ram",65},{"krishna",100}});
    //-----------------------------------------------------------------
    map<string, int>::iterator iter;
    // unordered_map<string,int> it;
    for (iter = marksmap.begin(); iter != marksmap.end(); iter++)
    {
        cout << (*iter).first << " " << (*iter).second << "\n";
    }
    //----------------------------------------------------------------
    cout << "The size is " << marksmap.size() << endl;
    cout << "The max_size is " << marksmap.max_size() << endl;
    cout << "The empty's return value is : " << marksmap.empty() << endl;   //Test whether container is empty
    return 0;
}