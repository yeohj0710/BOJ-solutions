#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M, K; cin >> N >> M >> K;

    vector<string> v(N), u(M);
    map<string, int> m;

    for(int i=0; i<N; i++) cin >> v[i];
    for(int i=0; i<M; i++) cin >> u[i];

    while(K--) {
        string str; cin >> str;
        m[str]++;
    }

    int a = 0, b = 0;

    for(int i=0; i<N; i++) a += m[v[i]];
    for(int i=0; i<M; i++) b += m[u[i]];

    if(a > b) cout << "A\n";
    else if(a < b) cout << "B\n";
    else cout << "TIE\n";
}
