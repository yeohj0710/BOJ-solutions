#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, K; cin >> N >> K;

    vector<bool> check(N+1, false);

    for(int i=0; i<K; i++) {
        int x; cin >> x;
        check[x] = true;
    }

    bool all = true;
    for(int i=1; i<=N; i++)
        if(!check[i]) {
            cout << i << " ";
            all = false;
        }

    if(all) cout << "*";
    cout << "\n";
}
