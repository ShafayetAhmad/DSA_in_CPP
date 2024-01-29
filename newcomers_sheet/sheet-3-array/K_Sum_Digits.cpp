#include <bits/stdc++.h>
#define ll long long int
#define PI 3.141592653
using namespace std;

int main()
{
    int size, sum = 0;
    cin >> size;
    string str;
    cin >> str;
    for (int i = 0; i < size; i++)
    {
        sum += str[i] - '0';
    }
    cout << sum << endl;
    return 0;
}