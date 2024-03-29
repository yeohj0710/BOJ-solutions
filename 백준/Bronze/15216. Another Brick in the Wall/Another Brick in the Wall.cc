#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M, K; cin >> N >> M >> K;

    vector<int> v(K);
    for(int i=0; i<K; i++) cin >> v[i];

    int cnt = 0, cur = 0;

    for(int i=0; i<K; i++) {
        cur += v[i];

        if(cur == M) {
            cur = 0;
            cnt++;

            if(cnt == N) {
                cout << "YES\n";
                return 0;
            }
        }
        else if(cur > M) {
            cout << "NO\n";
            return 0;
        }
    }

    cout << "NO\n";
}
