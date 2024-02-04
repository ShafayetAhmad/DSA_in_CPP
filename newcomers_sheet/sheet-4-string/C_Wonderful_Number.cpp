#include <bits/stdc++.h>
#define ll long long int
#define PI 3.141592653
using namespace std;

bool isOdd(int num)
{
    return num % 2;
}

bool isBinPalindrome(int num)
{
    bitset<32> binaryRepresentation(num);
    string str = to_string(num);
    string revStr = str;
    reverse(revStr.begin(), revStr.end());
    cout << str << " " << revStr << endl;
    return str == revStr;
}

int main()
{
    int num;
    cin >> num;
    if (isOdd(num) && isBinPalindrome(num))
        cout << "YES";
    else
        cout << "NO";
    cout << endl;
    return 0;
}