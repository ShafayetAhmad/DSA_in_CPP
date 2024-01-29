#include <bits/stdc++.h>
#define ll long long int
#define PI 3.141592653
using namespace std;

int main()
{
    ll size = 0;
    cin >> size;
    ll sum = 0;
    for (ll i = 0; i < size; i++)
    {
        ll curr;
        cin >> curr;
        sum += curr;
    }
    cout << abs(sum) << endl;
    return 0;
}