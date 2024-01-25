#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    vector<int> vct;
    // for (int i = 0; i < 10; i++)
    // {
    //     vct.push_back(i);
    // }
    int x;
    while (cin >> x)
    {
        vct.push_back(x);
    }
    for (int i = 0; i < vct.size(); i++)
    {
        cout << vct.at(i) << endl;
    }
    return 0;
}