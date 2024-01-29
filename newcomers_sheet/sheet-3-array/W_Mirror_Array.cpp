#include <bits/stdc++.h>
#define ll long long int
#define PI 3.141592653
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> mat;
    for (int i = 0; i < n; i++)
    {
        vector<int> tmp;
        for (int j = 0; j < m; j++)
        {
            int num;
            cin >> num;
            tmp.push_back(num);
        }
        mat.push_back(tmp);
    }

    for (int i = 0; i < n; i++)
    {
        for (int l = 0, r = m - 1; l < r; l++, r--)
        {
            int temp = mat[i][l];
            mat[i][l] = mat[i][r];
            mat[i][r] = temp;
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}