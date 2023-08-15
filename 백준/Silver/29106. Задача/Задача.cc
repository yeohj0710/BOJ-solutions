#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N, M; cin >> N >> M;

    vector<int> v(N);
    for(int i=0; i<N; i++) cin >> v[i];

    sort(v.begin(), v.end());

    int idx, mn = INT_MAX;

    for(int i=M-1; i<N; i++)
        if(v[i] - v[i-M+1] < mn) {
            mn = v[i] - v[i-M+1];
            idx = i;
        }

    for(int i=idx-M+1; i<=idx; i++) cout << v[i] << " ";
}
