#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N, M; cin >> N >> M;

    vector<int> v(N+1);

    for(int i=1; i<=N; i++) cin >> v[i];

    for(int i=1; i<=M; i++)
        for(int j=2; j<=N; j++)
            if((v[j] % i) < (v[j-1] % i)) swap(v[j-1], v[j]);

    for(int i=1; i<=N; i++) cout << v[i] << "\n";
}
