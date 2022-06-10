#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    while(true) {
        int N; cin >> N;
        if(N == 0) break;

        vector<int> v(N);
        for(int i=0; i<N; i++) cin >> v[i];

        int M; cin >> M;

        vector<int> u(M);
        for(int i=0; i<M; i++) cin >> u[i];

        int ans = 0, a = 0, b = 0, i = 0, j = 0;
        while(i < N && j < M) {
            if(v[i] == u[j]) {
                a += v[i], b += u[j];
                ans += max(a, b);
                a = 0, b = 0;
                i++, j++;
            }
            else if(v[i] < u[j]) {
                a += v[i];
                i++;
            }
            else if(v[i] > u[j]) {
                b += u[j];
                j++;
            }
        }
        if(i == N) {
            while(j < M) {
                b += u[j];
                j++;
            }
        }
        if(j == M) {
            while(i < N) {
                a += v[i];
                i++;
            }
        }
        ans += max(a, b);

        cout << ans << "\n";
    }
}
