#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N, M, K; cin >> N >> M >> K;

    vector<string> v(N);
    for(int i=0; i<N; i++) cin >> v[i];

    vector<bool> u(N, true);

    while(K--) {
        int x; char ch; cin >> x >> ch;

        for(int i=0; i<N; i++)
            if(v[i][x-1] != ch) u[i] = false;
    }

    int cnt = 0, idx = -1;

    for(int i=0; i<N; i++)
        if(u[i]) cnt++, idx = i;

    if(cnt == 1) {
        cout << "unique\n";
        cout << idx + 1 << "\n";
    }
    else {
        cout << "ambiguous\n";
        cout << cnt << "\n";
    }
}
