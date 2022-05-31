#include <bits/stdc++.h>
using namespace std;
#define INF 1e5
#define ll long long

void solve(){
    string x, y;
    cin >> x >> y;
    transform(x.begin(),x.end(),x.begin(),::tolower);
    transform(y.begin(),y.end(),y.begin(),::tolower);
    if(x > y)
        cout << 1;
    else if(x == y)
        cout << 0;
    else 
        cout << -1;
}

int main()
{
    solve();
    return 0;
}
