#include <bits/stdc++.h>
#define ll long long int
#define PI 3.141592653
using namespace std;

void fun(int n)
{
    int arr[n + n];
    for (int i = n; i < n + n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n + n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int n;
    cin >> n;
    fun(n);
    return 0;
}