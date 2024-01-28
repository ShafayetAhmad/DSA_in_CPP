#include <bits/stdc++.h>
#define ll long long int
#define PI 3.141592653
using namespace std;

int sumOfDigits(int num)
{
    int sum = 0;
    while (num != 0)
    {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int main()
{
    int n, a, b;
    int result = 0;
    cin >> n >> a >> b;
    for (int i = 1; i <= n; i++)
    {
        int sum = sumOfDigits(i);
        if (sum >= a && sum <= b)
            result += i;
    }
    cout << result << endl;
    return 0;
}