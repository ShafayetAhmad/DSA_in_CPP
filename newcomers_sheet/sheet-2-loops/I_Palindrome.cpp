#include <bits/stdc++.h>
#define ll long long int
#define PI 3.141592653
using namespace std;

int main()
{
    int num;
    cin >> num;
    if (num == 0)
    {
        cout << num << endl;
        cout << "YES" << endl;
    }

    int revNum = 0, temp = num;
    while (temp)
    {
        int digit = temp % 10;
        revNum = revNum * 10 + digit;
        temp /= 10;
    }
    cout << revNum << endl;
    revNum == num ? cout << "YES" : cout << "NO";
    cout << endl;

    return 0;
}