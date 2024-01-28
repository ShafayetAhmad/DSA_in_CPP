#include <bits/stdc++.h>
#define ll long long int
#define PI 3.141592653
using namespace std;

int main()
{
    int num;
    int serial = 1;
    cin >> num;
    for (int i = 0; i < num; i++)
    {
        cout << serial++ << " ";
        cout << serial++ << " ";
        cout << serial++ << " ";
        serial++;
        cout << "PUM" << endl;
    }
    return 0;
}