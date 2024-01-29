#include <bits/stdc++.h>
#define ll long long int
#define PI 3.141592653
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> vct(m + 1, 0);
    for (int i = 0; i < n; i++)
    {
        int tmp;
        cin >> tmp;
        vct[tmp]++;
    }
    for (int i = 1; i <= m; i++)
    {

        cout << vct[i] << endl;
    }
    return 0;
}