#include <bits/stdc++.h>
#define ll long long int
#define PI 3.141592653
using namespace std;

int main()
{
    int size;
    cin >> size;
    vector<int> vct;
    for (int i = 0; i < size; i++)
    {
        int temp;
        cin >> temp;
        vct.push_back(temp);
    }
    int count = 0;
    while (true)
    {
        bool flag = false;
        for (int i = 0; i < size; i++)
        {
            if (vct[i] == 0 || vct[i] % 2)
            {
                flag = true;
                break;
            }
            else
            {
                vct[i] /= 2;
            }
        }
        if (!flag)
            count++;
        else
        {
            break;
        }
    }
    cout << count << endl;
    return 0;
}