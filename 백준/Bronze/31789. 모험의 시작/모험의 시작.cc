#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N; cin >> N;

    int M, K; cin >> M >> K;

    bool chk = false;

    while(N--) {
        int a, b; cin >> a >> b;

        if(a <= M && b > K) chk = true;
    }

    if(chk) cout << "YES\n";
    else cout << "NO\n";
}
