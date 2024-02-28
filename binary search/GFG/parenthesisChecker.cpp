#include <bits/stdc++.h>
using namespace std;

bool ispar(string x)
{
    string s = "";

    for (int i = 0; i <= x.length(); i++)
    {
        int slen = s.size();
        if ((s[slen - 1] == '{' && x[i] == '}') || (s[slen - 1] == '(' && x[i] == ')') ||
            (s[slen - 1] == '[' && x[i] == ']'))
        {
            s.erase(s.end() - 1);
            char ch1 = s[s.length() - 1];
            continue;
        }
        if (x.length() == i)
            break;
        char ch = x[i];
        s += x[i];
    }
    if (s.size() == 0)
        return true;
    else
        return false;
}

int main()
{
    string a = "[({)]}";

    if (ispar(a))
        cout << "balanced" << endl;
    else
        cout << "not balanced" << endl;
}