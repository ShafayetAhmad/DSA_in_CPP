#include <bits/stdc++.h>
#define ll long long int
#define PI 3.141592653
using namespace std;

int main()
{
    string str;
    cin >> str;

    while (str.find("EGYPT") != -1)
    {
        str.replace(str.find("EGYPT"), 5, " ");
    }
    cout << str << endl;
    return 0;
}