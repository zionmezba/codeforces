#include <bits/stdc++.h>
using namespace std;
#define INF 1e5
#define ll long long

void solve(){
    int n,k,count=0;
    cin >> n >> k;
    int x[n];

    for (size_t i = 0; i < n; i++)
    {
        cin >> x[i];
    }
    for (size_t i = 0; i < n; i++)
    {
        if(x[i] >= x[k-1] && x[i] > 0)
            count++;
    }
    cout << count;
}

int main()
{
    solve();
    return 0;
}
