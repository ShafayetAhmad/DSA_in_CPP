#include <bits/stdc++.h>
#define ll long long int
#define PI 3.141592653
using namespace std;

bool isPalindrome(int num)
{
    string str = "";
    while (num != 0)
    {
        int rem = num % 2;
        str += to_string(rem);
        num /= 2;
    }
    string revStr = str;
    reverse(str.begin(), str.end());
    return str == revStr;
}

bool isOdd(int num)
{
    return num % 2;
}

int main()
{
    int num;
    cin >> num;
    if (isPalindrome(num) && isOdd(num))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}