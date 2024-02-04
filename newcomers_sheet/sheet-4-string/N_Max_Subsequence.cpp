#include <bits/stdc++.h>
#define ll long long int
#define PI 3.141592653
using namespace std;

int main()
{
    int num, res = 1;
    cin >> num;
    if (num == 1)
    {
        cout << 1 << endl;
        return 0;
    }
    string str;
    cin >> str;
    for (int i = 1; i < str.size(); i++)
    {
        if (str[i] != str[i - 1])
        {
            res++;
        }
    }
    cout << res << endl;
    return 0;
}