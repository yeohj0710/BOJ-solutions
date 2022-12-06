#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    vector<int> v(N+M);
    for(int i=0; i<N; i++) cin >> v[i];

    for(int i=0; i<N; i++)
        for(int j=0; j<N+M; j++) {
            int x; cin >> x;

            v[i] -= x;
            v[j] += x;
        }

    for(int i=0; i<N+M; i++) cout << v[i] << " ";
    cout << "\n";
}
