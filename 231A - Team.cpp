#include <bits/stdc++.h>
using namespace std;
#define INF 1e5
#define ll long long

void solve(){
    int t,accept=0;
    cin >>t;
    while (t--)
    {
        int x,count = 0;
        for(int i = 0; i < 3; i++){
            cin >> x;
            if(x == 1)
                count++;
        }
        if(count >= 2)
            accept++;
    }
    cout << accept << endl;
}

int main()
{
    solve();
    return 0;
}
