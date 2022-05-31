#include <bits/stdc++.h>
using namespace std;
#define fo1(i, n) for (int i = 0; i < n; i++)
#define ll long long

int main()
{
    int count = 0;
    string str;
    cin >> str;
    transform(str.begin(),str.end(),str.begin(),::tolower);
    string str2 = "aeiouy";
    for (size_t i = 0; i < str.size(); i++)
    {
        if(str[i] == 'a' || str[i] == 'e' ||str[i] == 'i' ||str[i] == 'o' ||str[i] == 'u' ||str[i] == 'y'){
            continue;
        }
        else{
            cout << '.' << str[i];
        }
    }
    

    return 0;
}
