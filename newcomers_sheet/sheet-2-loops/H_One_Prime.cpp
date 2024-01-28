#include <bits/stdc++.h>
#define ll long long int
#define PI 3.141592653
using namespace std;

int main()
{
    int num;
    cin >> num;
    if (num <= 1)
    {
        cout << "NO" << endl;
        return 0;
    }
    bool isPrime = true;
    for (int i = 2; i <= sqrt(num); ++i)
    {
        if (num % i == 0)
        {
            isPrime = false;
            break;
        }
    }
    isPrime ? cout << "YES" : cout << "NO";
    cout << endl;
    return 0;
}