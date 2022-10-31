#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    vector<int> v(N);
    for(int i=0; i<N; i++) cin >> v[i];

    for(int i=0; ; i++) {
        if(v[i % N] < i + M) {
            cout << i % N + 1 << "\n";
            break;
        }
    }
}
