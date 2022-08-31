#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    while(T--) {
        int N, M; cin >> N >> M;

        string a = "", b = "";

        for(int i=0; i<M; i++) {
            char c; cin >> c;

            a += c;
        }

        for(int i=0; i<M; i++) {
            char c; cin >> c;

            b += c;
        }

        vector<char> v(N);
        for(int i=0; i<N; i++) cin >> v[i];

        int ans = 0;

        for(int i=0; i<N; i++) {
            string tmp = "";

            for(int j=0; j<M; j++) tmp += v[(i+j) % N];

            if(tmp >= a && tmp <= b) ans++;
        }

        cout << ans << "\n";
    }
}
