#include <bits/stdc++.h>
#define ll long long int
#define PI 3.141592653
using namespace std;

void fun(int n)
{

    unordered_set<int> set;
    for (int i = 0; i < n; i++)
    {
        int tmp;
        cin >> tmp;
        set.insert(tmp);
    }
    cout << set.size() << endl;
}

int main()
{
    int n;
    cin >> n;
    fun(n);
    return 0;
}