#include <bits/stdc++.h>
#define ll long long int
#define PI 3.141592653
using namespace std;

int main()
{
    string str1, str2;
    cin >> str1 >> str2;
    int i = 0, j = 0;
    while (i < str1.size() && j < str2.size())
    {
        if (str1[i] < str2[j])
        {
            cout << str1 << endl;
            return 0;
        }
        else if (str1[i] > str2[j])
        {
            cout << str2 << endl;
            return 0;
        }
        else
        {
            i++, j++;
        }
        if (i == str1.size())
            cout << str1 << endl;
        else if (j == str2.size())
            cout << str2 << endl;
    }

    return 0;
}