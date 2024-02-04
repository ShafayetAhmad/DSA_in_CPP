#include <bits/stdc++.h>
#define ll long long int
#define PI 3.141592653
using namespace std;

int main()
{
    string str;
    cin >> str;
    ll sum = 0;
    for (int i = 0; i < str.size(); i++)
    {
        sum += str[i] - '0';
    }
    cout << sum << endl;
    return 0;
}