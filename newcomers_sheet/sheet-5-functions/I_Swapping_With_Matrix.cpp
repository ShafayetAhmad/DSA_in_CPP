#include <bits/stdc++.h>
#define ll long long int
#define PI 3.141592653
using namespace std;

void swap(vector<vector<int>> &vct, int n, int x, int y)
{

    for (int i = 0; i < n; i++)
    {
        int tmp = vct[i][x-1];
        vct[i][x-1] = vct[i][y-1];
        vct[i][y-1] = tmp;
    }
    for (int i = 0; i < n; i++)
    {
        int tmp = vct[x-1][i];
        vct[x-1][i] = vct[y-1][i];
        vct[y-1][i] = tmp;
    }
}

int main()
{
    int n, x, y;
    cin >> n >> x >> y;
    vector<vector<int>> vct;
    for (int i = 0; i < n; i++)
    {
        vector<int> row;
        for (int j = 0; j < n; j++)
        {
            int num;
            cin >> num;
            row.push_back(num);
        }
        vct.push_back(row);
    }

    swap(vct, n, x, y);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << vct[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}