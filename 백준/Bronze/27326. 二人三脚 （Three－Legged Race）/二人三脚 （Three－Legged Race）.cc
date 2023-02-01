#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N; cin >> N;

    vector<int> v(N+1);

    for(int i=0; i<N*2-1; i++) {
        int x; cin >> x;

        v[x]++;
    }

    for(int i=1; i<=N; i++)
        if(v[i] < 2) cout << i << "\n";
}
