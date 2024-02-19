#include <bits/stdc++.h>
using namespace std;

int minValue(string s, int k)
{

    map<char, int> mpp;

    for (int i = 0; i < s.size(); i++)
    {
        mpp[s[i]] += 1;
    }
    while (k > 0)
    {
        auto pr = max_element(mpp.begin(), mpp.end(), [](const auto &x, const auto &y)
                              { return x.second < y.second; });

        pr->second -= 1;
        k--;
    }
    int minVal = 0;
    for (auto i = mpp.begin(); i != mpp.end(); i++)
    {
        int currVal = i->second;
        minVal += currVal * currVal;
    }

    return minVal;

   
}

int main()
{
    string s = "aabbbbac";
    cout << minValue(s, 3);
}