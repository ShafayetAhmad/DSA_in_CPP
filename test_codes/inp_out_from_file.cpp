
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    vector<int> vct;
    for (int i = 0; i < 4; i++)
    {
        int num;
        cin >> num;
        vct.push_back(num);
    }

    for (int i = 0; i < 4; i++)
    {
        cout << vct[i] * 5 << "\n";
    }
    return 0;
}