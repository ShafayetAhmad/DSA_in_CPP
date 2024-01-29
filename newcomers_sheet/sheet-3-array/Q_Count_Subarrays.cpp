#include <bits/stdc++.h>
#define ll long long int
#define PI 3.141592653
using namespace std;

void solve()
{
    int n, count = 0;
    cin >> n;
    vector<int> vct;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        vct.push_back(temp);
    }

    for (int s = 0; s < n; s++)
    {
        for (int e = s; e < n; e++)
        {
            bool isSorted = true;
            for (int k = s; k < e; k++)
            {
                if (vct[k] > vct[k + 1])
                {
                    isSorted = false;
                    break;
                }
            }
            if (isSorted)
                count++;
        }
    }
    cout << count << endl;
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