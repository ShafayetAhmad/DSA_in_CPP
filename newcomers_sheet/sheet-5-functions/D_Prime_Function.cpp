#include <bits/stdc++.h>
#define ll long long int
#define PI 3.141592653
using namespace std;

bool isPrime(ll num)
{
    if (num == 1)
        return false;
    for (ll i = 2; i <= sqrt(num); i++)
    {
        if (num % i == 0)
            return false;
    }
    return true;
}

void solve()
{
    ll num;
    cin >> num;
    if (isPrime(num))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
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