#include <bits/stdc++.h>
#define ll long long int
#define PI 3.141592653
using namespace std;

void solve()
{
    string str;
    cin >> str;
    if (str.find("010") != string::npos || str.find("101") != string::npos)
    {
        cout << "Good" << endl;
    }
    else
    {
        cout << "Bad" << endl;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}