#include <bits/stdc++.h>
#define ll long long int
#define PI 3.141592653
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<vector<int>> mat;
    for (int i = 0; i < n; i++)
    {
        vector<int> tmp;
        for (int j = 0; j < n; j++)
        {
            int num;
            cin >> num;
            tmp.push_back(num);
        }
        mat.push_back(tmp);
    }

    int mainDiagSum = 0, secDiagSum = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
                mainDiagSum += mat[i][j];
            if (i + j == n - 1)
                secDiagSum += mat[i][j];
        }
    }

    cout << abs(mainDiagSum - secDiagSum) << endl;
    return 0;
}