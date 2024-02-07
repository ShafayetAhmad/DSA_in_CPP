#include <bits/stdc++.h>
#define ll long long int
#define PI 3.141592653
using namespace std;

ll fun(ll x, ll n)
{
    ll res = 0;
    for (ll i = 2; i <= n; i += 2)
    {
        res += pow(x, i);
    }
    return res;
}

int main()
{
    ll x, n;
    cin >> x >> n;

    cout << fun(x, n);

    return 0;
}