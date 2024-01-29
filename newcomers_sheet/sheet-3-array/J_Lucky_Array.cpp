#include <bits/stdc++.h>
#define ll long long int
#define PI 3.141592653
using namespace std;

int main()
{
    int size;
    cin >> size;
    int min = INT_MAX;
    vector<int> vct;
    for (int i = 0; i < size; i++)
    {
        int temp;
        cin >> temp;
        min = temp < min ? temp : min;
        vct.push_back(temp);
    }

    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if (vct[i] == min)
            count++;
    }
    if (count % 2)
        cout << "Lucky" << endl;
    else
        cout << "Unlucky" << endl;
    return 0;
}