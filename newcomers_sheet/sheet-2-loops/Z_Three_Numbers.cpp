#include <bits/stdc++.h>
#define ll long long int
#define PI 3.141592653
using namespace std;

int main()
{
    int K, S;
    cin >> K >> S;
    int count = 0;

    for (int X = 0; X <= K; X++)
    {
        for (int Y = 0; Y <= K; Y++)
        {
            int Z = S - X - Y;
            if (Z >= 0 && Z <= K)
            {
                count++;
            }
        }
    }

    cout << count << endl;
    return 0;
}