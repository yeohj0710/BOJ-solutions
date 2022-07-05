#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<int> v(N+1);
    for(int i=1; i<=N; i++) cin >> v[i];

    int M; cin >> M;

    vector<int> u(N+1);
    while(M--) {
        int x; cin >> x;
        u[x]++;
    }

    for(int i=1; i<=N; i++) {
        if(u[i] > v[i]) cout << "yes\n";
        else cout << "no\n";
    }
}
