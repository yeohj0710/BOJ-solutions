#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;
    cin.ignore();

    vector<string> v(N+1);
    for(int i=1; i<=N; i++) getline(cin, v[i]);

    int M; cin >> M;

    while(M--) {
        int x; cin >> x;

        cout << "Rule " << x << ": ";

        if(x >= 1 && x <= N) cout << v[x] << "\n";
        else cout << "No such rule\n";
    }
}
