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
    vector<char> vct(26, 0);
    for (int i = 0; i < num; i++)
    {
        vct[str[i] - 'a']++;
    }
    for (int i = 0; i < 26; i++)
    {
        for (int j = 0; j < vct[i]; i++)
        {
            cout << static_cast<char>(i + 'a');
        }
    }
    cout << endl;
    return 0;
}