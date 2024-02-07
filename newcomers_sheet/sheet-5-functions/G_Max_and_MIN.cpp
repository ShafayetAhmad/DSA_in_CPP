#include <bits/stdc++.h>
#define ll long long int
#define PI 3.141592653
using namespace std;

void fun(int n)
{
    int minNum = INT_MAX, maxNum = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        minNum = min(num, minNum);
        maxNum = max(num, maxNum);
    }
    cout << minNum << " " << maxNum << endl;
}

int main()
{
    int n;
    cin >> n;
    fun(n);

    return 0;
}