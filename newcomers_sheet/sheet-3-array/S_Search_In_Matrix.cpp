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
    int x;
    cin >> x;

    bool flag = false;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (mat[i][j] == x)
            {
                flag = true;
                cout << "will not take number" << endl;
                break;
            }
        }
        if (flag)
            break;
    }
    if (flag)
        return 0;
    cout << "will take number" << endl;
    return 0;
}