#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N; string s; cin >> N >> s;

    bool chk = true;

    for(int i=1; i<N; i++)
        if(s[i] != s[0]) chk = false;

    if(chk) cout << "Yes\n";
    else cout << "No\n";
}
