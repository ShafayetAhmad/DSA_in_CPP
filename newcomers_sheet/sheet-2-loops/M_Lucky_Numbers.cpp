#include <bits/stdc++.h>
#define ll long long int
#define PI 3.141592653
using namespace std;

int main()
{
    int num1, num2;
    cin >> num1 >> num2;
    bool hasLucky = false;
    for (int i = num1; i <= num2; i++)
    {
        string strNum = to_string(i);
        bool isLucky = true;
        for (int i = 0; i < strNum.size(); i++)
        {
            if (strNum[i] != '4' && strNum[i] != '7')
            {
                isLucky = false;
                break;
            }
        }
        if (isLucky)
        {
            hasLucky = true;
            cout << strNum << " ";
        }
    }
    if (!hasLucky)
        cout << -1 << endl;
    return 0;
}