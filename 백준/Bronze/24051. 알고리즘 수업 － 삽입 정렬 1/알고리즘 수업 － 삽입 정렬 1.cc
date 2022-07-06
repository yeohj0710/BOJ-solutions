#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    vector<int> v(N);
    for(int i=0; i<N; i++) cin >> v[i];

    int cnt = 0;

    for(int i=1; i<N; i++) {
        int loc = i-1;
        int x = v[i];

        while(loc >= 0 && x < v[loc]) {
            v[loc+1] = v[loc];
            loc--;
            cnt++;

            if(cnt == M) {
                cout << v[loc+1] << "\n";
                return 0;
            }
        }
        if(loc + 1 != i) {
            v[loc+1] = x;
            cnt++;

            if(cnt == M) {
                cout << x << "\n";
                return 0;
            }
        }
    }

    cout << -1 << "\n";
}
