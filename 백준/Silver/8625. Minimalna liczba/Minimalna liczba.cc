#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    unordered_map<int, bool> m;

    while(N--) {
        int x; cin >> x;

        m[x] = true;
    }

    for(int i=M; ; i+=M) {
        if(!m[i]) {
            cout << i << "\n";
            break;
        }
    }
}
