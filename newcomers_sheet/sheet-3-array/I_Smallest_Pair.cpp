#include <bits/stdc++.h>
#define ll long long int
#define PI 3.141592653
using namespace std;

void solve()
{
    int size;
    cin >> size;
    ll sum = LLONG_MAX;
    vector<ll> vct;
    for (int i = 0; i < size; i++)
    {
        ll temp;
        cin >> temp;
        vct.push_back(temp);
    }
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            ll tempSum = vct[i] + vct[j] + j - i;
            sum = tempSum < sum ? tempSum : sum;
        }
    }
    cout << sum << endl;
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