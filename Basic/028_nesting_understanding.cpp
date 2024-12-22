#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vv vector<vector<int>
using namespace std;
int main()
{
    int mpsz;
    cin>>mpsz;
    map<pair<string,string>,vector<int>> m;
     for(int i=0;i<mpsz;i++)
     {
        string fn,ln;
        int vecsz;
        cin>>fn>>ln>>vecsz;
        for(int j=0;j<vecsz;j++)
        {
            int x;
            cin>>x;
            m[make_pair(fn,ln)].push_back(x);
        }
     }
     for(auto &pr:m)
     {
        auto &fullname=pr.first;
        auto &vect=pr.second;
        cout<<fullname.first<<" "<<fullname.second<<endl;
        // cout<<pr.first.first<<" "<<pr.first.second<<endl;

        cout<<vect.size()<<endl;
        // cout<<pr.second.size()<<endl;
        
        for(int i=0;i<vect.size();i++)
        {
            cout<<vect[i]<<" ";
            //cout<<pr.second[i]<<" ";
        }
        cout<<endl;
     }
    return 0;
}
/*
3
a b 4
1 2 3 4
c d 2
1 2
d f 3
2 3 4
*/

/*
QUESTION: https://www.hackerearth.com/problem/algorithm/the-monk-and-class-marks/?utm_source=header&utm_medium=search&utm_campaign=he-search
Monk is a multi-talented person, and prepares results for his college in his free time. (Yes, he is still in love with his old college!) He gets a list of students with their marks. The maximum marks which can be obtained in the exam is 100.

The Monk is supposed to arrange the list in such a manner that the list is sorted in decreasing order of marks. And if two students have the same marks, they should be arranged in lexicographical manner.

Help Monk prepare the same!

Input format:
On the first line of the standard input, there is an integer N, denoting the number of students. N lines follow, which contain a string and an integer, denoting the name of the student and his marks.

Output format:
You must print the required list.

Constraints:
1 <= N <= 105
1 <= | Length of the name | <= 100
1 <= Marks <= 100

Sample Input
3
Eve 78
Bob 99
Alice 78


Sample Output
Bob 99
Alice 78
Eve 78

*/
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//   int n;
//   cin>>n;
//   multiset<pair<int,string>>mp;
//   for(int i=0;i<n;i++)
//   {
//     string name;
//     int mark;
//     cin>>name>>mark;
//     mp.insert(make_pair((-1*mark),name));
//   }
//   for(auto pr:mp)
//   cout<<pr.second<<" "<<-pr.first<<endl;
//   return 0;
// }

// #include<bits/stdc++.h>
// #define ll long long
// #define vi vector<int>
// #define vv vector<vector<int>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     map<int,multiset<string>> mp;
//     for(int i=0;i<n;i++)
//     {
//         string name;
//         int mark;
//         cin>>name>>mark;
//         mp[-mark].insert(name);
//     }
//     for(auto &pr:mp)
//     {
//         for(auto &nm:pr.second)
//         cout<<nm<<" "<<-pr.first<<endl;
//     }
//     return 0;
// }
// --------------------------------------------------------------------------------
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//   int n;
//   cin >> n;
//   map<int ,multiset<string>> m;
//   for(int i=0;i<n;i++)
//   {
//     string name;
//     int marks;
//     cin>>name>>marks;
//     m[marks].insert(name);
//   }
//   for (auto cur_it = --m.end(); ; cur_it--)
//   {
//     for (auto student : (*cur_it).second)
//     {
//       cout << student << " " << (*cur_it).first << endl;
//     }
//     if(cur_it==m.begin())
//     break;
//   }
// }