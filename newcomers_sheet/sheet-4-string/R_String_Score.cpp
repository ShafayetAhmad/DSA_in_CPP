#include <bits/stdc++.h>
#define ll long long int
#define PI 3.141592653
using namespace std;

int main()
{
    int length, score = 0;
    cin >> length;
    string str;
    cin >> str;
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == 'V')
        {
            score += 5;
        }
        else if (str[i] == 'W')
        {
            score += 2;
        }
        else if (str[i] == 'X' && i != str.size() - 1)
        {
            str[i + 1] = '0';
        }
        else if (str[i] == 'Y' && i != str.size() - 1)
        {
            str.push_back(str[i + 1]);
            str[i + 1] = '0';
        }
        else if (str[i] == 'Z' && i != str.size() - 1)
        {
            if (str[i + 1] == 'V')
            {
                score /= 5;
                str[i + 1] = '0';
            }
            else if (str[i + 1] == 'W')
            {
                score /= 2;
                str[i + 1] = '0';
            }
        }
    }
    cout << score << endl;
    return 0;
}