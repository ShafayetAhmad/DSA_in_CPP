#include <bits/stdc++.h>
#define ll long long int
#define PI 3.141592653
using namespace std;

void solve()
{
    int n;
    cin >> n;
    ll result = 1;
    for (int i = 2; i <= n; i++)
    {
        result *= i;
    }
    cout << result << endl;
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