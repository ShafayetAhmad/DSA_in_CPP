#include <bits/stdc++.h>
#define ll long long int
#define PI 3.141592653
using namespace std;

int main()
{
    int N, Q;
    cin >> N >> Q;
    string str;
    cin >> str;
    string opt;
    while (Q--)
    {
        cin >> opt;

        if (opt == "pop_back")
        {
            str.pop_back();
        }
        else if (opt == "front")
        {
            cout << str.front() << endl;
        }
        else if (opt == "back")
        {
            cout << str.back() << endl;
        }
        else if (opt == "sort")
        {
            int l, r;
            cin >> l >> r;
            sort(str.begin() + min(l, r) - 1,
                 str.begin() + max(l, r));
        }
        else if (opt == "reverse")
        {
            int l, r;
            cin >> l >> r;
            reverse(str.begin() + min(l, r) - 1, str.begin() + max(l, r));
        }
        else if (opt == "print")
        {
            int pos;
            cin >> pos;
            cout << str[pos - 1] << endl;
        }
        else if (opt == "substr")
        {
            int l, r;
            cin >> l >> r;
            for (int i = min(l, r) - 1; i <= max(l, r) - 1; i++)
            {
                cout << str[i];
            }
            cout << endl;
        }
        else if (opt == "push_back")
        {
            char ch;
            cin >> ch;
            str.push_back(ch);
        }
    }

    return 0;
}