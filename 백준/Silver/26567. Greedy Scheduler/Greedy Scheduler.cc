#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    ios::sync_with_stdio(0), cin.tie(0);

    int T; cin >> T;

    while(T--) {
        int N, M; cin >> M >> N;

        vector<int> v(M+1);

        while(N--) {
            int x; cin >> x;

            int Min = INT_MAX, idx;

            for(int i=1; i<=M; i++) {
                if(v[i] < Min) {
                    Min = v[i];
                    idx = i;
                }
            }

            cout << idx << " ";
            v[idx] += x;
        }
        cout << "\n";
    }
}
