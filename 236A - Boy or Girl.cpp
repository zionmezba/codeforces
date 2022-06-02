#include <bits/stdc++.h>
using namespace std;
#define INF 1e5
#define ll long long

int countDistinct(string s)
{

    unordered_map<char, int> m;

    for (int i = 0; i < s.length(); i++)
    {
        m[s[i]]++;
    }

    return m.size();
}

void solve()
{
    string str;
    cin >> str;

    if (countDistinct(str) % 2 == 0)
        cout << "CHAT WITH HER!";
    else
        cout << "IGNORE HIM!";
}

int main()
{
    solve();
    return 0;
}
