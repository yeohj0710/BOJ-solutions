#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    vector<bool> v(N+1);
    for(int i=1; i<=N; i++) {
        int x; cin >> x;

        if(x == 1) v[i] = true;
        else v[i] = false;
    }

    while(M--) {
        int a, b, c; cin >> a >> b >> c;

        if(a == 1) v[b] = c;
        else if(a == 2) {
            for(int i=b; i<=c; i++) {
                if(v[i]) v[i] = false;
                else v[i] = true;
            }
        }
        else if(a == 3) {
            for(int i=b; i<=c; i++) v[i] = false;
        }
        else if(a == 4) {
            for(int i=b; i<=c; i++) v[i] = true;
        }
    }

    for(int i=1; i<=N; i++) cout << v[i] << " ";
    cout << "\n";
}

