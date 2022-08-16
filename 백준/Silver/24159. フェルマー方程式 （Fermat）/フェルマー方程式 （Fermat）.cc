#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int M, N; cin >> M >> N;

    vector<int> v(M, 1), u(M);

    for(int i=0; i<M; i++) {
        int a = i, b = N;

        while(b > 0) {
            if(b % 2 == 1) v[i] = (v[i] * a) % M;

            a = (a * a) % M;
            b /= 2;
        }

        u[v[i]]++;
    }

    vector<int> w(M);

    for(int i=0; i<M; i++)
        for(int j=i+1; j<M; j++) w[(v[i] + v[j]) % M] += 2;

    for(int i=0; i<M; i++) w[(v[i] + v[i]) % M]++;

    int ans = 0;

    for(int i=0; i<M; i++) ans += u[i] * w[i];

    cout << ans << "\n";
}
