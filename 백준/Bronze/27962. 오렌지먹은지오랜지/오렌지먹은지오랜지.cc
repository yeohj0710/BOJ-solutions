#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N; string str; cin >> N >> str;

    bool check = false;

    for(int i=1; i<=N; i++) {
        string a = str.substr(0, i);
        string b = str.substr(N-i, i);

        int cnt = 0;

        for(int j=0; j<i; j++)
            if(a[j] != b[j]) cnt++;

        if(cnt == 1) {
            check = true;
            break;
        }
    }

    if(check) cout << "YES\n";
    else cout << "NO\n";
}
