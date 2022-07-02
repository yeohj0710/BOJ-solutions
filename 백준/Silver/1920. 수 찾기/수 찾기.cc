#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    unordered_map<int, bool> m;

    while(N--) {
        int x; cin >> x;

        m[x] = true;
    }

    int M; cin >> M;

    while(M--) {
        int x; cin >> x;

        if(m[x]) cout << 1 << "\n";
        else cout << 0 << "\n";
    }
}
