#include <bits/stdc++.h>
#define ll long long int
#define PI 3.141592653
using namespace std;

int main()
{
    string str;
    cin >> str;
    string currStr;
    vector<string> res;
    int lCount = 0, rCount = 0;
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == 'L')
        {
            lCount++;
            currStr.push_back(str[i]);
            if (lCount == rCount)
            {
                res.push_back(currStr);
                currStr = "";
                lCount = 0;
                rCount = 0;
            }
        }
        else
        {
            rCount++;
            currStr.push_back(str[i]);
            if (lCount == rCount)
            {
                res.push_back(currStr);
                currStr = "";
                lCount = 0;
                rCount = 0;
            }
        }
    }
    cout << res.size() << endl;
    for (int i = 0; i < res.size(); i++)
    {
        cout << res[i] << endl;
    }
    return 0;
}