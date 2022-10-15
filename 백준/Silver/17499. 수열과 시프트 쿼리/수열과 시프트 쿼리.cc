#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    vector<int> v(N);
    for(int i=0; i<N; i++) cin >> v[i];

    int cur = 0;

    while(M--) {
        int Q; cin >> Q;

        if(Q == 1) {
            int a, b; cin >> a >> b;

            v[(cur+a-1) % N] += b;
        }
        else if(Q == 2) {
            int x; cin >> x;

            cur = (cur - x + N) % N;
        }
        else if(Q == 3) {
            int x; cin >> x;

            cur = (cur + x) % N;
        }
    }

    for(int i=cur; i<N; i++) cout << v[i] << " ";
    for(int i=0; i<cur; i++) cout << v[i] << " ";
    cout << "\n";
}
