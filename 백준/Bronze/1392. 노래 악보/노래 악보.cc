#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    vector<int> v(10001);
    int cur = 0;

    for(int i=1; i<=N; i++) {
        int x; cin >> x;

        while(x--) v[cur++] = i;
    }

    while(M--) {
        int x; cin >> x;

        cout << v[x] << "\n";
    }
}
