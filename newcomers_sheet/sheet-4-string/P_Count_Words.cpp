#include <bits/stdc++.h>
#define ll long long int
#define PI 3.141592653
using namespace std;

int main()
{
    string str, word;
    int count = 0;
    getline(cin, str);

    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] != 32 && str[i] != '!' && str[i] != '.' && str[i] != '?' && str[i] != ',')
        {
            word += str[i];
        }
        if ((str[i] == 32 || str[i] == '!' || str[i] == '.' || str[i] == '?' || str[i] == ',' || i == str.size() - 1) && word.size() != 0)
        {
            count++;
            word = "";
        }
    }
    cout << count << endl;
    return 0;
}