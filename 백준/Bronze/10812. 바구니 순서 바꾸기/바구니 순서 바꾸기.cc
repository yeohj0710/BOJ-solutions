#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    vector<int> v(N+1);
    for(int i=1; i<=N; i++) v[i] = i;

    while(M--) {
        int a, b, c; cin >> a >> b >> c;

        vector<int> u;

        for(int i=a; i<c; i++) u.push_back(v[i]);

        for(int i=c; i<=b; i++) v[i-(c-a)] = v[i];

        for(int i=0; i<u.size(); i++) v[a+(b-c+1)+i] = u[i];
    }

    for(int i=1; i<=N; i++) cout << v[i] << " ";
    cout << "\n";
}
