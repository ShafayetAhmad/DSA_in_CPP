#include <bits/stdc++.h>
#define ll long long int
#define PI 3.141592653
using namespace std;

int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    cout << s1.size() << " " << s2.size() << endl;
    string s3 = s1 + " " + s2;
    cout << s3 << endl;
    return 0;
}