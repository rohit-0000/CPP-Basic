#include <bits/stdc++.h>
using namespace std;
double eps = 1e-6; // acuracy
double mult(double mid, int n)
{
    double multi = 1;
    for (int i = 0; i < n; i++)
        multi *= mid;

    return multi;
}
int main()
{
    double num;
    cin >> num;
    int n; // for n-th root i.e for sqrt:n = 2
    cin >> n;
    double lo = 1, hi = num, mid;
    while (hi - lo > eps)
    {
        mid = (lo + hi) / 2;
        if (mult(mid, n) < num)
            lo = mid + eps;
        else
            hi = mid;
    }
    cout << setprecision(10) << "Square root = " << lo << endl;
    // cout<<setprecision(10)<<"Square root = "<<hi;  // same upto 5 decimal place due to eps=1e-6
    return 0;
}

// time complexity = P*(N*log10^d)   for P th root of number n with d decimal accuracy.