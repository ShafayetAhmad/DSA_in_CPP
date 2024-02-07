#include <bits/stdc++.h>
#define ll long long int
#define PI 3.141592653
using namespace std;

void shiftElements(int arr[], int n, int x)
{

    while (x--)
    {
        int last = arr[n - 1];
        for (int i = n - 1; i > 0; i--)
        {
            arr[i] = arr[i - 1];
        }
        arr[0] = last;
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int n, x;
    cin >> n >> x;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    shiftElements(arr, n, x);

        return 0;
}