#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N; cin >> N;

    string str; cin >> str;

    string ans = "";

    ans += str[0];

    for(int i=1; i<N; i++) {
        if(str[i-1] == str[i]) ans += '0';
        else ans += '1';
    }

    cout << ans << "\n";
}
