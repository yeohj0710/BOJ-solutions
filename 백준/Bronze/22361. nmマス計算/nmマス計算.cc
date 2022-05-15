#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    while(true) {
        int N, M; cin >> N >> M;
        if(N == 0 && M == 0) break;

        vector<int> u(N), v(M);
        for(int i=0; i<N; i++) cin >> u[i];
        for(int i=0; i<M; i++) cin >> v[i];

        int cnt[10] = {};
        for(int i=0; i<N; i++)
            for(int j=0; j<M; j++) {
                string temp = to_string(u[i] * v[j]);

                for(int k=0; k<temp.length(); k++) cnt[temp[k] - '0']++;
            }

        for(int i=0; i<10; i++) cout << cnt[i] << " ";
        cout << "\n";
    }
}
