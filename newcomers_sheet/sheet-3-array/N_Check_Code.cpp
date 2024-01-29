#include <bits/stdc++.h>
#define ll long long int
#define PI 3.141592653
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    string str;
    cin >> str;
    for (int i = 0; i < a + b + 1; i++)
    {
        if (i == a && str[i] != '-')
        {
            cout << "No" << endl;
            return 0;
        }
        if (i != a && str[i] == '-')
        {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;
}