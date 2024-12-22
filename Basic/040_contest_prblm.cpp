/*contest link:-
https://assessment.hackerearth.com/challenges/new/college/luv_youtube_cp_course_contest_3/
*/
/*
1.LINK:-https://www.hackerearth.com/problem/algorithm/help-joe-ii/
Joe has been burdened by the assignments given and continuous evaluations taken by his profs.
He wants to go for a trip over this weekend, but he has an assignment.

Help Joe in his assignment, the problem statement for the assignment is -

    You are given two integers n and m , further you are given a sequence of n numbers.

    Now for several query lets say q number of queries, for each query input lets denote it
    with x, find the maximum value of (a[i] + x) % m possible.

    Note - a[i] is the i-th element of the sequence.

Input Format -

    First line of input contains an integer , n ,denoting the size of the array, and an integer m.

    Second line contains n space separated integers of the array.

    Third line contains the number of queries,q.

    Next q lines contain a query value x, for which we need to find the output.



Output Format -

    For each query return the maximum value of (a[i]+value of q)%m possible, in separate line.

Constraints -

    1 ≤ n ≤ 10^5

    1 ≤ m ≤ 10^8

    0 ≤  a[i] ≤ 10^15

    1 ≤ q ≤ 10^5

    0 ≤ x ≤ 10^15

Sample Input
5 10
0 1 2 3 4
3
1
6
9
Sample Output
5
9
9
*/

//(a[i] + x) % m = ( a[i] % m + x % m ) % m

// #include <bits/stdc++.h>
// #define ll long long
// using namespace std;
// int main()
// {
//     int n, m;
//     cin >> n >> m;
//     ll a[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//         a[i] = a[i] % m;
//     }
//     sort(a, a + n); // we sort an array to use upper_bond and to get largest number
//     int q;
//     cin >> q;
//     while (q--)
//     {
//         ll x;
//         cin >> x;
//         x = x % m;
//         ll *ab = upper_bound(a, a + n, m - x - 1);  // use use upper_bond of (m-x-1) because we want to get (m-x-1+x) % m greatest and nearer to m .i.e(m-1) % m is maximum
//         if (ab != a)
//             ab--;       // we decrease 1 iterator because upper bond gives greator than (m-x-1).
//         cout << max((a[n - 1] + x) % m, (*ab + x) % m);
//     }
//     return 0;
// }

/*
2.LINK:-https://www.hackerearth.com/problem/algorithm/too-lazy-to-name-the-question-ii/

Well, lazy to give a theme or backstory to the question too. So, lets dive into the problem right away!

You are given N points in xy-plane. Determine the difference between maximum and minimum areas of rectangle formed from these points, with sides parallel to X and Y axes. In case no rectangle can be formed, print -1.

Note, that the points used in one rectangle, may be used in another rectangle. Also, it is guaranteed that that N points don't have any duplicates. Refer test cases for further explanation.

Constraints:

1 <= N <= 1000

0 <= x,y for each point <= 45000

Input Format:

First line contains N value.

Next N lines contain 2 space separated integers - "x y"

Output Format:

One line containing the difference or -1, which ever applicable.

Sample Input
6
10 0
0 10
10 2
0 0
0 2
10 10
Sample Output
80
Time Limit: 1
Memory Limit: 256
Source Limit:
Explanation
2 rectangles can be formed here - one with (0,0) (0,10) (10,10) and (10,0) which gives max area of 100; other with (0,0) (0,2) (10,2) and (10,0) which gives min area of 20. Thus the difference is 80.

Note that - IF points (0,3) and (10,3) existed, then the rectangle with minimum area would have been formed by thrse points along with (0,2) and (10,2) and the min area shall be 10. Thus, our answer becomes 90 in that case.
*/

// #include<bits/stdc++.h>
// #define ll long long
// #define vi vector<int>
// #define vv vector<vector<int>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     set<pair<int,int>> s1;
//     for(int i=0;i<n;i++)
//     {
//         int x,y;
//         cin>>x>>y;
//         s1.insert(make_pair(x,y));
//     }
//     int ar_min=INT_MAX,ar_max=INT_MIN;
//     for(auto v1 : s1)
//     {
//         for(auto v2 : s1)
//         {
//             auto d1=v1;
//             pair<int,int> d2=v2;
//             if(d1.first==d2.first) continue;
//             if(d1.second==d2.second) continue;
//             int x1=d1.first ,y1=d2.second;
//             int x2=d2.first ,y2=d1.second;
//             if(s1.count({x1,y1}) && s1.count({x2,y2}))  // we use set because count time complexity is O(log n) in set and O(n) in vector
//             {
//                 int ar=abs((x1-x2)*(y1-y2));
//                 ar_min=min(ar_min,ar);
//                 ar_max=max(ar_max,ar);
//             }
//         }
//     }
//     if(ar_min==INT_MAX)
//     cout<<-1;
//     else
//     cout<<ar_max-ar_min;
//     return 0;
// }  //n^2*log(n)

/*
3.LINK:- https://www.hackerearth.com/problem/algorithm/luffy-needs-food/
Luffy needs to reach grandline ASAP. Lufi's ship is K Kilometers far from Grandline . But luffy consumse 1 unit of food
 for every kilometer the ship covers and luffy can never be hungry until he reaches grandline. There are N islands between
 ship's current position and grandline. ithIsland is Di distance apart from grandline and has Ai amount of food. Luffy curently
 has F amount of food. You need to tell minimum number of islands luffy needs to stop at so that he never is hungary before
 reaching grandline.
If its not possible to reach grandline without luffy being hungary, then print -1

Input

The first line of the input contains a single integer T denoting the number of test cases.
The first line of each test case contains a single integer N denoting number of islands.
The second line of each test case contains two integers K and F denoting the initial distance of ship from grandline and amount of food ship has initially.
Next N lines contain two space separated integers Di and Ai denoting the distance of the island from Grandline and the amount of food in island. Ship can take all the food from any island.

Output

For each test case print the minimum number of stops required to reach grandline. If he cannot reach home print "-1".

Constraints

1 ≤  T ≤ 10

1≤  N ≤ 104

1 ≤  D ≤ K ≤ 1e6

1 ≤  A, F  ≤ 1e6

Sample Input
2
4
25 10
20 5
10 10
22 2
23 4
5
25 7
12 4
11 3
3 4
17 4
2 19
Sample Output
2
-1

Time Limit: 2
Memory Limit: 256
Source Limit:
Explanation
In the first test case, luffy initially has 10 units of food, The ship reaches 4th island(23 distance apart) first and
luffy has eaten 2 units of food upto then ship reaches 3rd(22 distance apart) island luffy has eaten 2+1 = 3 units of food.
 Then ship reaches island one(20 distance apart) and refill ship with 5 units of food and then reaches second(10 distance apart)
 and refills ship with 10 units of food. Total ship stopped 2 times.
*/

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;
//     cin>>t;
//     while(t--)
//     {
//         int n;
//         cin>>n;
//         int k,f;
//         cin>>k>>f;
//         set<pair<int,int>> s;
//         auto cur=s.begin();
//         for(int i=0;i<n;i++)
//         {
//             int d,a;
//             cin>>d>>a;
//             // distance from ship = k-d,because k is total distance and d is distance of island from grandline.
//             s.insert(make_pair(k-d,a));
//         }
//         multiset <int> av_food;  //we use multiset because two island can have same amount of food
//         int ans=0;
//         bool can_reach=true;
//         for(int i=0;i<k;i++)
//         {
//             if(cur->first==i)
//             {
//                 av_food.insert(cur->second);
//                 cur++;
//             }
//             if(f==0)
//             {
//                 if(av_food.size()==0)
//                 {
//                     can_reach=false;
//                     break;
//                 }
//                 else
//                 {
//                     auto it=--av_food.end();
//                     f=f+(*it);
//                     av_food.erase(it);
//                     ans++;
//                 }
//             }
//             f--;
//         }
//         if(can_reach==false)
//         cout<<-1<<endl;
//         else
//         cout<<ans<<endl;
//     }
//     return 0;
// }

/*
4 LINK:- https://www.hackerearth.com/problem/algorithm/last-wish/
Sandeep Bhaiya has a wish which we want to be fulfilled, can you help him? Each data in the Rajendra Nagar has 2 integer variables. In total Rajendra Nagar has n such datas.  Sandeep Bhaiya wants to calculate for each of the data how much data's are there which are strictly smaller then this data.

Definition of a data being smaller than other is as follows ,

data 1 is smaller then data 2 if sum of two integers in data 1 is less than that of data 2.

If sum of both are equal then one with the small value of first integer is smaller.

With this definition you have the smaller one among the two , so obviously the other one is larger.

Note :- The data in rajendra nagar follows the property that no two data are exactly same, that is , no two will have same value of both the integers.



Input:-

first line has no.of test cases.

Each test case has , n the no, of datas , then n following lines have 2 integers representing the first and the second integer of the data respectively.

summation of n over all test case <= 500000

0<= Value of integer data <=1e9



Output:-

For each test case , output one line having n integers, representing how many datas are smaller then this data.

Ideal solution is attached so you can have answer for any test case you want.



Sample Input
1
3
3 4
1 2
5 6
Sample Output
1 0 2

*/
// #include <bits/stdc++.h>
// #define ll long long
// #define vi vector<int>
// #define vv vector < vector<int>
// using namespace std;
// bool comp(pair<int, pair<int, int>> v1, pair<int, pair<int, int>> v2)
// {
//     int s1 = v1.second.first + v1.second.second;
//     int s2 = v2.second.first + v2.second.second;
//     if(s1==s2)
//     return v1.second.first<v2.second.first;
//     else
//     return s1<s2;
// }
// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;
//         vector<pair<int, pair<int, int>>> v1;
//         for (int i = 0; i < n; i++)
//         {
//             int x, y;
//             cin >> x >> y;
//             v1.push_back({i, {x, y}});
//         }
//         sort(v1.begin(), v1.end(), comp);
//         vector<int> ans(n);
//         for(int i=0;i<n;i++)
//         {
//             ans[v1[i].first]=i;
//         }
//         for(auto pr: ans)
//         cout<<pr<<" ";
//         cout<<endl;
//     }
//     return 0;
// }

/*
5.LINK:https://www.hackerearth.com/problem/algorithm/covid-rush/
There are M covid centres denoted by IDs 0 to M - 1 located on a cirular path (centre 1 is right to centre 0, centre 2 is right to centre 1, ... centre 0 is right to centre M - 1). Each centre can treat only one patient at a time. There are N patients and two arrays, arrival and treatment of length N is given. arrival denotes that ith patient arrives to (i%M)th centre on arrival[i]th day.

If the centre is occupied, then they try getting admitted to the closest vacant centre clockwise right to the (i%M)th centre.
If no centre is vacant, then the patient leaves.
Once admitted in a centre, the patients gets treated for treatment[i] days there and then leaves.

Output M values in which ith value denotes the number of patients treated by ith covid centre in total.

    Note - arrival[i] and treatment[i] is the i-th element of the array, arrival and treatment respectively. (0-indexing is followed)



Input Format -

    First line of input contains an integer , n ,denoting the number of patients and an interger, m, denoting the number of centres.

    Second line contains n space separated integers of the array, arrival.

Third line contains n space separated integers of the array, treatment.

Output Format -

Output M space seperated integers in which ith value denotes the number of patients treated by ith covid centre.

Constraints -

    1 ≤ N, M ≤ 10^5

    1 ≤ arrival[i], treatment[i] ≤ 10^8

    All the values of arrival are in strictly increasing order.
Sample Input
5 3
1 3 6 7 10
6 10 1 10 1
Sample Output
2 1 2
Explanation
The first patient arrives on day 1 and as the 0th centre (because i%M = 0%3 = 0) is vacant, they occupy the 0th centre and will leave on (1 + 6) = 7th day.

The second patient arrives on day 3 and as 1st centre (because 1%3 = 1) is vacant, they occupy the 1st centre and will leave on (3 + 10) = 13th day.

The third patient arrives on day 6 and as 2nd centre (because 2%3 = 2) is vacant, they occupy the 2nd centre and will leave on (6 + 1) = 7th day.

The fourth patient arrives on day 7 and as 0th centre (because 3%3 = 0) is not vacant and next clockwise vacant centre is 2nd centre, they occupy the 2nd centre and will leave on (7 + 10) = 17th day.

The fifth and last patient arrives on day 10 and as 1st centre (because 4%3 = 1) is not vacant and next clockwise vacant centre is 0th, they occupy the 0th centre and will leave on (10 + 1) = 11th day.

Centre 0 was visited by : first and fifth patient

Centre 1 was visited by : second patient

Centre 2 was visited by : third and fourth patient
*/

#include <bits/stdc++.h>
using namespace std;
int n, m;
set<int> vacant_centres;
map<int, vector<int>> to_discharge;

void discharge_patients_untill_day(int day)
{
    for (auto it = to_discharge.begin(); it != to_discharge.end();) // if we use it++ here then first erase after iterator doesnot point anything
    {
        int discharge_day = it->first;
        auto &centers = it->second;
        if (day < discharge_day)
            break;
        for (auto centre : centers)
        {
            vacant_centres.insert(centre);
        }
        to_discharge.erase(it++);  // here iterator will increase then delete previous iterator therefore iterator always points any element 
    }
}
int get_vacant_centre(int patient_index)
{
    auto available_centre_it = vacant_centres.lower_bound(patient_index % m);
    if (available_centre_it == vacant_centres.end())
        available_centre_it = vacant_centres.begin();
    return *available_centre_it;
}
int main()
{
    cin >> n >> m;
    vector<pair<int, int>> timings(n);
    vector<int> treated_count(m, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> timings[i].first;
    }
    for (int i = 0; i < n; i++)
    {
        cin >> timings[i].second;
    }
    sort(timings.begin(), timings.end());
    for (int i = 0; i < m; i++)
    {
        vacant_centres.insert(i);
    }
    for (auto &timing : timings)
    {
        int arrival_day = timing.first;
        int treatment_day = timing.second;
        discharge_patients_untill_day(arrival_day);

        if (vacant_centres.size() == 0)
            continue;
        int patient_index = &timing - &timings[0];
        int available_centre = get_vacant_centre(patient_index);

        to_discharge[arrival_day + treatment_day].push_back(available_centre);
        treated_count[available_centre]++;
        vacant_centres.erase(available_centre);
    }

    for (int i = 0; i < m; i++)
    {
        cout << treated_count[i] << " ";
    }
    return 0;
}
/*
6.LINK:-https://www.hackerearth.com/problem/algorithm/doraemon-andd-his-pocket-of-wonder/
Doraemon is planning to clean his pocket and arrange all his gadgets according to a particular order so that he can find the gadgets easily whenever Nobita cries for help!He wasn't able to find his "Sort_Everything" gadget so he asks for your help. He will give you points in return to help you secure rank in the contest.

He will give you two arrays as input. First array contains the ID number of all his gadgets.The second array contains the order in which he wants you to arrange some of his favourite gadgets in the beginning. Then add the remaining gadgets in the sorted order of their ID.

It is possible that gadget ID present in second array might not be present in first array. First array can contain duplicate gadet IDs. no duplicates in the second array is allowed.

Do this for T testcases.

Input Format:
First line contains number of testcases.

Each test case is of 4 lines.

- First line contains the size of the array N

- Second line contains the first array A1 of size N .

- Third line contains the size of the array M

- Fourth line contains the second array, A2 of size M.

Output Format:
It consists of T lines. One line represents the sorted order of the pocket for that test case.

Constraints:
0<T<5

0<N,M<=10^5

0<A1[i], A2[i]<=10^9

Sample Input
2
6
5 3 2 15 10 7
2
7 2
10
3 3 1 1 8 9 4 5 10 2
4
3 6 9 1
Sample Output
7 2 3 5 10 15
3 3 9 1 1 2 4 5 8 10

Test Case 1:

Here, 7,2 should be placed in this same order at the beginning then remaining in the sorted order

Test Case 2:

Here, only thing to note is that ID 6 is not currently present in Doraemon's pocket. Else all is same.
*/

// #include<bits/stdc++.h>
// #define ll long long
// #define vi vector<int>
// #define vv vector<vector<int>
// using namespace std;
// int main()
// {
//     int t;
//     cin>>t;
//     while(t--)
//     {
//         int n;
//         cin>>n;
//         multiset<int> a1;
//         for(int i=0;i<n;i++)
//         {
//             int x;
//             cin>>x;
//             a1.insert(x);
//         }
//         int m;
//         cin>>m;
//         for(int i=0;i<m;i++)
//         {
//             int x;
//             cin>>x;
//             int y=a1.count(x);
//             while(y--)
//             {
//                 cout<<x<<" ";
//             }
//             a1.erase(x);
//         }
//         for(auto pr:a1)
//         {
//             cout<<pr<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }