#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    int a, b;

    while(T--) {
        int N; cin >> N;

        for(int i=0; i<N; i++) cin >> a >> b;

        int M; cin >> M;

        for(int i=0; i<M; i++) cin >> a >> b;

        if(N == M) cout << "yes\n";
        else cout << "no\n";
    }
}
