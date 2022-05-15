#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, K; cin >> N >> K;

    vector<int> v(N+1);
    for(int i=1; i<=N; i++) v[i] = i;

    while(K--) {
        int a, b; cin >> a >> b;

        v[a] = b;
    }

    for(int i=1; i<=N; i++) cout << v[i] << "\n";
}
