#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N, M, K; cin >> N >> M >> K;

    vector<int> v(N), u(M);

    while(K--) {
        int a, b, c; cin >> a >> b >> c;

        if(a == 1) v[b-1] += c;
        else u[b-1] += c;
    }

    for(int i=0; i<N; i++) {
        for(int j=0; j<M; j++) cout << v[i] + u[j] << " ";
        cout << "\n";
    }
}

