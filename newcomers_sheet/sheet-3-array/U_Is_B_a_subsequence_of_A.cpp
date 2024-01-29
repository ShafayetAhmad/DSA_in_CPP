#include <bits/stdc++.h>
#define ll long long int
#define PI 3.141592653
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> arr1;
    vector<int> arr2;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        arr1.push_back(x);
    }
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        arr2.push_back(x);
    }

    int i = 0, j = 0;
    while (i < n && j < m)
    {
        if (arr1[i] == arr2[j])
        {
            i++;
            j++;
        }
        else
        {
            i++;
        }
    }
    if (j == m)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}