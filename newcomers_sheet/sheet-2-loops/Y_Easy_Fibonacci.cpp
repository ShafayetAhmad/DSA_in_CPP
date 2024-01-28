#include <bits/stdc++.h>
#define ll long long int
#define PI 3.141592653
using namespace std;

int main()
{
    ll first = 0, second = 1;
    int num;
    cin >> num;
    if (num == 0)
    {
        return 0;
    }
    if (num == 1)
    {
        cout << 0 << endl;
        return 0;
    }
    if (num == 2)
    {
        cout << 0 << " " << 1 << endl;
        return 0;
    }
    cout << first << " " << second << " ";
    for (int i = 2; i < num; i++)
    {
        ll temp = first + second;
        cout << temp << " ";
        first = second;
        second = temp;
    }
    cout << endl;
    return 0;
}