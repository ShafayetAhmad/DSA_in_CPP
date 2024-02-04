#include <bits/stdc++.h>
#define ll long long int
#define PI 3.141592653
using namespace std;

int main()
{
    string line;
    bool flag = false, multiCommentOpen = false;
    stringstream cleancode;
    while (getline(cin, line))
    {
        flag = false;
        if (line.size() == 0 || line == " ")
        {
            continue;
        }
        for (int i = 0; i < line.length(); i++)
        {
            if (line[i] == '/' && line[i + 1] == '/' && !multiCommentOpen)
            {
                break;
            }
            else if (line[i] == '/' && line[i + 1] == '*')
            {
                i++;
                multiCommentOpen = true;
            }
            else if (line[i] == '*' && line[i + 1] == '/' && multiCommentOpen)
            {
                i++;
                multiCommentOpen = false;
            }
            else if (!multiCommentOpen)
            {
                cout << line[i];
                flag = true;
            }
        }
        if (flag && !multiCommentOpen)
        {
            cout << endl;
        }
    }
    return 0;
}