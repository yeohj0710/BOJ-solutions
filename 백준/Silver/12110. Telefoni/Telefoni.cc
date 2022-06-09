#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    vector<int> v(N);
    for(int i=0; i<N; i++) cin >> v[i];

    int ans = 0;
    for(int i=0; i<N; i++) {
        bool check = false;
        for(int j=1; j<=M; j++) {
            if(i+j >= N-1) {
                cout << ans << "\n";
                return 0;
            }

            if(v[i+j] == 1) {
                i += j-1;
                check = true;
                break;
            }
        }

        if(!check) {
            ans++;
            i += M-1;
        }
    }
}
