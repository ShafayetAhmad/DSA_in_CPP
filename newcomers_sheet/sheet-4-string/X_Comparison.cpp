#include <bits/stdc++.h>
#define ll long long int
#define PI 3.141592653
using namespace std;

int main()
{
    string str;
    cin >> str;
    string result = str;
    string leftStr = "", rightStr;
    string tempStr = str;
    for (int i = 0; i < str.length() - 1; i++)
    {
        leftStr += str[i];
        tempStr.erase(0, 1);
        rightStr = tempStr;
        rightStr = str.substr(i + 1, str.size() - 1);
        sort(leftStr.begin(), leftStr.end());
        sort(rightStr.begin(), rightStr.end());
        result = min(result, leftStr + rightStr);
    }
    cout << result << endl;
    return 0;
}