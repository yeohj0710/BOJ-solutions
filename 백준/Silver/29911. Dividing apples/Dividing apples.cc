#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N; cin >> N;

    vector<int> v(N+1);

    for(int i=1; i<=N; i++) {
        cin >> v[i];

        v[i] += v[i-1];
    }

    int idx = 0, mn = INT_MAX;

    for(int i=1; i<=N; i++) {
        if(abs(v[i] - (v[N] - v[i])) < mn) {
            mn = abs(v[i] - (v[N] - v[i]));
            idx = i;
        }
    }

    cout << idx << "\n";
}
