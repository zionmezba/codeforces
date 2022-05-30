#include <bits/stdc++.h>
using namespace std;
#define INF 1e5
#define ll long long

void solve()
{
    ll n, m, a;
    cin >> n >> m >> a; // 6 x 6         4x4=16
    ll tiles = ((n + a - 1) / a) * ((m + a - 1) / a);
    cout << tiles << endl;
}

int main()
{
    solve();
    return 0;
}
