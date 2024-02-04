#include <bits/stdc++.h>
#define ll long long int
#define PI 3.141592653
using namespace std;

int main()
{
    string str;
    getline(cin, str);

    string word = "";
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == 32)
        {
            reverse(word.begin(), word.end());
            cout << word << " ";
            word = "";
        }
        else
        {
            word += str[i];
        }
    }
    reverse(word.begin(), word.end());
    cout << word << endl;
    return 0;
}