#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<int> v(N);
    for(int i=0; i<N; i++) cin >> v[i];

    int M; cin >> M;

    int ans = 0;

    while(M--) {
        int K; cin >> K;

        bool check = true;

        while(K--) {
            int x; cin >> x;

            for(int i=0; i<v.size(); i++)
                if(x == v[i]) check = false;
        }

        if(check) ans++;
    }

    cout << ans << "\n";
}
