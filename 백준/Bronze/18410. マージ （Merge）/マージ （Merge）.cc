#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    vector<int> v(N+M);
    for(int i=0; i<N+M; i++) cin >> v[i];

    sort(v.begin(), v.end());

    for(int i=0; i<N+M; i++) cout << v[i] << "\n";
}
