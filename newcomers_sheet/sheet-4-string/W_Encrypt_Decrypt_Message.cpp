#include <bits/stdc++.h>
#define ll long long int
#define PI 3.141592653
using namespace std;

int main()
{
    int num;
    cin >> num;
    string str;
    cin >> str;
    string res;
    string Key = "PgEfTYaWGHjDAmxQqFLRpCJBownyUKZXkbvzIdshurMilNSVOtec#@_!=.+-*/";

    string Original = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    if (num == 1)
    {
        for (int i = 0; i < str.size(); i++)
        {
            int idx = Original.find(str[i]);
            res += Key[idx];
        }
    }

    else if (num == 2)
    {
        for (int i = 0; i < str.size(); i++)
        {
            int idx = Key.find(str[i]);
            res += Original[idx];
        }
    }
    cout << res << endl;
    return 0;
}