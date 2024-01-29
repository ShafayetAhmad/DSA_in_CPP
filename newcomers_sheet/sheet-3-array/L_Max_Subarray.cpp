#include <bits/stdc++.h>
#define ll long long int
#define PI 3.141592653
using namespace std;

void solve()
{
    int size;
    cin >> size;
    vector<int> vct;
    for (int i = 0; i < size; i++)
    {
        int temp;
        cin >> temp;
        vct.push_back(temp);
    }

    for (int i = 0; i < size; i++)
    {
        for (int j = i; j < size; j++)
        {
            int max = INT_MIN;
            for (int k = i; k <= j; k++)
            {
                max = max > vct[k] ? max : vct[k];
            }
            cout << max << " ";
        }
    }
    cout << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}