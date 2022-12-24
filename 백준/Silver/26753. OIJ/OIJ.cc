#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    ios::sync_with_stdio(0), cin.tie(0);

    string str; cin >> str;

    int cnt = 0;

    for(int i=0; i<str.length(); i++) {
        if(cnt % 3 == 0 && str[i] == 'o') cnt++;
        else if(cnt % 3 == 1 && str[i] == 'i') cnt++;
        else if(cnt % 3 == 2 && str[i] == 'j') cnt++;
    }

    cnt /= 3;

    if(cnt > 0) cout << cnt << "\n";
    else cout << "NIE\n";
}
