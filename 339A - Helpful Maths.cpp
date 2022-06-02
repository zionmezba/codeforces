#include <bits/stdc++.h>
using namespace std;
#define INF 1e5
#define ll long long

void solve()
{
    string str;
    cin >> str;
    for (size_t i = 0; i < str.length(); i += 2) // 2+3+1+2+3
    {
        for (size_t j = i+2; j < str.length(); j += 2)
        {
            if (str[i] > str[j])
            {
                char swp = str[i];
                str[i] = str[j];
                str[j] = swp;
            }
        }
    }
    cout << str;
}

int main()
{
    solve();
    return 0;
}
