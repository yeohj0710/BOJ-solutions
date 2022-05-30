#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M, K; cin >> N >> M >> K;

    map<string, int> m;
    vector<string> v(N);

    for(int i=0; i<N; i++) cin >> v[i];

    for(int i=0; i<K; i++) {
        string str; cin >> str;
        int x; cin >> x;

        m[str] += x;
    }

    bool check = false;
    for(int i=0; i<N; i++)
        if(m[v[i]] >= M) {
            cout << v[i] << " wins!\n";
            check = true;
        }

    if(!check) cout << "No winner!\n";
}
