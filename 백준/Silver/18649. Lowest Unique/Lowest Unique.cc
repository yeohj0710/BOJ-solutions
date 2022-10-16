#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, K, M; cin >> N >> K >> M;

    while(M--) {
        for(int i=1; i<=K; i++) cout << i << " ";
        cout << endl;

        int x;

        for(int i=0; i<N-K; i++) cin >> x;
    }
}
