#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    vector<bool> v(N+1);

    while(M--) {
        int a, b, c; cin >> a >> b >> c;

        if(a == 0) {
            for(int i=b; i<=c; i++) {
                if(v[i]) v[i] = false;
                else v[i] = true;
            }
        }
        else {
            int cnt = 0;
            for(int i=b; i<=c; i++)
                if(v[i]) cnt++;

            cout << cnt << "\n";
        }
    }
}
