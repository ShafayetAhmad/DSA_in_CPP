#include <bits/stdc++.h>
#define ll long long int
#define PI 3.141592653
using namespace std;

int main()
{
    string str;
    cin >> str;
    int arr[26] = {0};
    for (int i = 0; i < str.size(); i++)
    {
        arr[str[i] - 'a']++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (arr[i])
        {
            cout << static_cast<char>(i + 'a') << " : " << arr[i] << endl;
        }
    }
    return 0;
}