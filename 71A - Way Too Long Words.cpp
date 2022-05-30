#include <bits/stdc++.h>
using namespace std;
#define INF 1e5
#define ll long long

void solve(){
    int n;
    cin >> n;
    while (n--)
    {
        string inp;
        cin >> inp;
        int x = inp.length();
        if(x > 10){
            cout << inp[0] << x-2 << inp[x-1] << endl;
        }
        else
            cout << inp << endl;
    }
}


int main()
{
    solve();
    return 0;
}
