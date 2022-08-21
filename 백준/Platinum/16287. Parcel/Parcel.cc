#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int M, N; cin >> M >> N;

    vector<int> v(N);
    for(int i=0; i<N; i++) cin >> v[i];

    vector<int> u(5e5, -1), w(5e5, -1);

    for(int i=0; i<N; i++)
        for(int j=i+1; j<N; j++) {
            int sum = v[i] + v[j];

            if(u[sum] != -1 || w[sum] != -1) continue;

            u[sum] = i;
            w[sum] = j;
        }

    for(int i=0; i<N; i++)
        for(int j=i+1; j<N; j++) {
            int sum = M - (v[i] + v[j]);

            if(sum <= 0 || sum >= 400000) continue;
            if(u[sum] == -1 || w[sum] == -1) continue;
            if(u[sum] == i || w[sum] == j || u[sum] == j || w[sum] == i) continue;

            cout << "YES\n";

            return 0;
        }

    cout << "NO\n";
}
