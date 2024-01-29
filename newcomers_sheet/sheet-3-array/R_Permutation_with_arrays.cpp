#include <bits/stdc++.h>
#define ll long long int
#define PI 3.141592653
using namespace std;

int main()
{
    int size;
    cin >> size;
    vector<int> vct1;
    vector<int> vct2;
    for (int i = 0; i < size; i++)
    {
        int temp;
        cin >> temp;
        vct1.push_back(temp);
    }
    for (int i = 0; i < size; i++)
    {
        int temp;
        cin >> temp;
        vct2.push_back(temp);
    }
    sort(vct1.begin(), vct1.end());
    sort(vct2.begin(), vct2.end());
    if (vct1 == vct2)
    {
        cout << "yes" << endl;
    }
    else
    {
        cout << "no" << endl;
    }

    return 0;
}