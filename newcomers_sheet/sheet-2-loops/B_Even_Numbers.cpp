#include <bits/stdc++.h>
#define ll long long int
#define PI 3.141592653
using namespace std;

int main()
{
    int n;
    cin >> n;

    if (n < 2)
    {
        cout << -1 << endl;
    }
    else
    {
        for (int i = 2; i <= n; i += 2)
        {
            cout << i << endl;
        }
    }

    return 0;
}
