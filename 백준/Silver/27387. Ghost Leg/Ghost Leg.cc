#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N, M; cin >> N >> M;

    vector<int> v(M);
    for(int i=0; i<M; i++) cin >> v[i];

    vector<int> u(N+1);

    for(int i=1; i<=N; i++) {
        int x = i;

        for(int j=0; j<M; j++) {
            if(v[j] == x) x++;
            else if(v[j] == x - 1) x--;
        }

        u[x] = i;
    }

    for(int i=1; i<=N; i++) cout << u[i] << "\n";
}
