#include <bits/stdc++.h>
#define ll long long int
#define PI 3.141592653
using namespace std;

void solve()
{
    string str1, str2;
    cin >> str1 >> str2;
    string str3 = "";
    int i = 0, j = 0;
    while (i < str1.size() && j < str2.size())
    {
        str3 += str1[i++];
        str3 += str2[j++];
    }
    while (i < str1.size())
    {
        str3 += str1[i++];
    }
    while (j < str2.size())
    {
        str3 += str2[j++];
    }
    cout << str3 << endl;
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