#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    ios::sync_with_stdio(0), cin.tie(0);

    string str; cin >> str;

    int cnt = 0;
    for(int i=0; i<str.length(); i++)
        if(str[i] == 'A') cnt++;

    cout << cnt << " : " << str.length() - cnt << "\n";
}
