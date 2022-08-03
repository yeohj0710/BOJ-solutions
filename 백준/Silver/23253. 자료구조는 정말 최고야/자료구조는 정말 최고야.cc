#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    bool check = true;

    while(M--) {
        int K; cin >> K;

        vector<int> v(K);
        for(int i=0; i<K; i++) cin >> v[i];

        for(int i=1; i<K; i++)
            if(v[i-1] < v[i]) check = false;
    }

    if(check) cout << "Yes\n";
    else cout << "No\n";
}
