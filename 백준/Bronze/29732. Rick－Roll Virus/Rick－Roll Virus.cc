#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N, M, K; cin >> N >> M >> K;

    vector<bool> v(N);

    for(int i=0; i<N; i++) {
        char ch; cin >> ch;

        if(ch == '.') continue;

        for(int j=max(i-K, (int)0); j<=min(i+K, N-1); j++) v[j] = true;
    }

    int sum = 0;

    for(int i=0; i<N; i++)
        if(v[i]) sum++;

    if(sum <= M) cout << "Yes\n";
    else cout << "No\n";
}
