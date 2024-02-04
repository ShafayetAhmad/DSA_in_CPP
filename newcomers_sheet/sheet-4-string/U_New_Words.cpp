#include <bits/stdc++.h>
#define ll long long int
#define PI 3.141592653
using namespace std;

int main()
{
    string str;
    cin >> str;
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    int countE = count(str.begin(), str.end(), 'e');
    int countG = count(str.begin(), str.end(), 'g');
    int countY = count(str.begin(), str.end(), 'y');
    int countP = count(str.begin(), str.end(), 'p');
    int countT = count(str.begin(), str.end(), 't');

    int count = min({countE, countG, countY, countP, countT});

    cout << count << endl;
    return 0;
}