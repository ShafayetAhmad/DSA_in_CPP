#include <bits/stdc++.h>
#define ll long long int
#define PI 3.141592653
using namespace std;

void solve()
{
    int num;
    cin >> num;
    string binary = "";
    while (num > 0)
    {
        int rem = num % 2;
        binary = to_string(rem) + binary;
        num /= 2;
    }
    // cout << binary << endl;
    string newBinary = "";
    for (int i = 0; i < binary.size(); i++)
    {
        if (binary[i] == '1')
            newBinary += '1';
    }
    int result = 0;
    for (int i = 0; i < newBinary.size(); i++)
    {
        result = result * 2 + (newBinary[i] - '0');
    }
    cout << result << endl;
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