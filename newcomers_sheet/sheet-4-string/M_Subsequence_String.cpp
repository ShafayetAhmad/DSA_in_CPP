#include <bits/stdc++.h>
#define ll long long int
#define PI 3.141592653
using namespace std;

int main()
{
    string str;
    cin >> str;
    string hello = "hello";
    int index = 0;
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == hello[index])
        {
            index++;
        }
        if (index == 5)
        {
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;
    return 0;
}