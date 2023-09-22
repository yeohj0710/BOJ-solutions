#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int T; cin >> T;

    while(T--) {
        int N; cin >> N;

        vector<int> v(N);
        for(int i=0; i<N; i++) cin >> v[i];

        sort(v.begin(), v.end());

        int i = (N - 1) / 2, j = (N - 1) / 2 + 1, cnt = 0;

        while(true) {
            if(cnt % 2 == 0) {
                if(i < 0) break;

                cout << v[i] << " ";
                i--;
            }
            else {
                if(j >= N) break;

                cout << v[j] << " ";
                j++;
            }
            cnt++;
        }
        cout << "\n";
    }
}
