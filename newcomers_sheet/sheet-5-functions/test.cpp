#include <bits/stdc++.h>
#define ll long long int
#define PI 3.141592653
using namespace std;

class Solution
{
public:
    string frequencySort(string s)
    {
        unordered_map<char, int> freqMap;
        string res = "";
        for (int i = 0; i < s.size(); i++)
        {
            freqMap[s[i]]++;
        }

        vector<pair<char, int>> freqVect(freqMap.begin(), freqMap.end());

        auto comp = [](pair<char, int> a, pair<char, int> b)
        {
            return a.second > b.second;
        };

        sort(freqVect.begin(), freqVect.end(), comp);

        for (auto it : freqVect)
        {
            while (it.second--)
            {
                res += it.first;
            }
        }

        return res;
    }
};

int main()
{
    string s;
    cin >> s;
    Solution obj;
    obj.frequencySort(s);
    return 0;
}