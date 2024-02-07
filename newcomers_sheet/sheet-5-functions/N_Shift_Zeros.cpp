#include <bits/stdc++.h>
#define ll long long int
#define PI 3.141592653
using namespace std;

void fun(int arr[], int n)
{
    int zeroCount = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            zeroCount++;
            continue;
        }
        cout << arr[i] << " ";
    }

    while (zeroCount--)
        cout << 0 << " ";
    cout << endl;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    fun(arr, n);
    return 0;
}