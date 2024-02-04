#include <bits/stdc++.h>
#define ll long long int
#define PI 3.141592653
using namespace std;

int main()
{
    int num;
    cin >> num;
    for (int i = 0; i < num; i++)
    {
        cout << i + 1;
        if (i != num - 1)
            cout << " ";
    }
    cout << endl;
    return 0;
}