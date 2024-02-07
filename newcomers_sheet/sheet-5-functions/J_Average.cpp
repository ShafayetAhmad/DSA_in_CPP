#include <bits/stdc++.h>
#define ll long long int
#define PI 3.141592653
using namespace std;

double avg(double sum, double n)
{
    return (sum / n);
}

int main()
{
    double n;
    cin >> n;
    double sum = 0.0;

    for (int i = 0; i < n; i++)
    {
        double num;
        cin >> num;
        sum += num;
    }
    cout << fixed << setprecision(7) << avg(sum, n) << endl;
    return 0;
}