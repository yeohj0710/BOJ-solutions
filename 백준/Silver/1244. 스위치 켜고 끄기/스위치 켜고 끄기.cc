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

    while(M--) {
        int a, b; cin >> a >> b;

        if(a == 1) {
            for(int i=b; i<=N; i+=b) {
                if(v[i] == 0) v[i] = 1;
                else if(v[i] == 1) v[i] = 0;
            }
        }
        else if(a == 2) {
            int l = b, r = b;

            while(v[l] == v[r] && l >= 1 && r <= N) l--, r++;

            for(int i=l+1; i<=r-1; i++) {
                if(v[i] == 0) v[i] = 1;
                else if(v[i] == 1) v[i] = 0;
            }
        }
    }

    for(int i=1; i<=N; i++) {
        cout << v[i] << " ";

        if(i % 20 == 0) cout << "\n";
    }
    cout << "\n";
}
