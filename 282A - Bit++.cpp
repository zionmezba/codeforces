#include <bits/stdc++.h>
using namespace std;
#define INF 1e5
#define ll long long

void solve(){
    int x,val = 0;;
    cin >> x;
    while (x--)
    {
        string stat;
        cin >> stat;
        if(stat[1] == '+')
            val++;
        else
            val--;
    }
    cout << val;
}


int main()
{
    solve();
    return 0;
}
