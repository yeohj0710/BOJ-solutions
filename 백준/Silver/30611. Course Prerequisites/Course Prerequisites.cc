#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N; cin >> N;

    unordered_map<string, bool> m;

    while(N--) {
        string str; cin >> str;

        m[str] = true;
    }

    int M; cin >> M;

    bool chk = true;

    while(M--) {
        string str; cin >> str;

        if(!m[str]) chk = false;
    }

    if(chk) cout << 1 << "\n";
    else cout << 0 << "\n";
}
