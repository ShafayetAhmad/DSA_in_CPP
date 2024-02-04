#include <bits/stdc++.h>
#define ll long long int
#define PI 3.141592653
using namespace std;

void solve()
{
    string str;
    cin >> str;
    if (str.size() > 10)
    {
        cout << str[0] << str.size()-2 << str[str.size() - 1] << endl;
    }
    else
    {
        cout << str << endl;
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