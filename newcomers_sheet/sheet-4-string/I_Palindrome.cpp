#include <bits/stdc++.h>
#define ll long long int
#define PI 3.141592653
using namespace std;

int main()
{
    string str;
    cin >> str;
    for (int i = 0, j = str.size() - 1; i < j; i++, j--)
    {
        if (str[i] != str[j])
        {
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
    return 0;
}