#include <bits/stdc++.h>
using namespace std;
#define INF 1e5
#define ll long long

void solve(){
    int x,y;
    int a = 3, b = 3;
    for (size_t i = 1; i < 6; i++)
    {
        for (size_t j = 1; j < 6; j++)
        {
            int p;
            cin >> p;
            if(p == 1){
                x = i;
                y = j;
            }
        }
        
    }

    cout << abs(a-x) + abs(b-y) << endl;
}


int main()
{
    solve();
    return 0;
}
