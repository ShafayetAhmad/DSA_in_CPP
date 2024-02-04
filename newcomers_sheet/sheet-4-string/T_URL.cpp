#include <bits/stdc++.h>
#define ll long long int
#define PI 3.141592653
using namespace std;

int main()
{
    string url;
    getline(cin, url);
    size_t paramIndex = url.find('?');
    string queryString = url.substr(paramIndex + 1);
    istringstream iss(queryString);
    vector<pair<string, string>> res;
    string query;
    while (getline(iss, query, '&'))
    {
        size_t equalIndex = query.find('=');
        string key = query.substr(0, equalIndex);
        string value = query.substr(equalIndex + 1);
        res.emplace_back(key, value);
    }

    for (auto curr : res)
    {
        cout << curr.first << ": " << curr.second << endl;
    }
    return 0;
}