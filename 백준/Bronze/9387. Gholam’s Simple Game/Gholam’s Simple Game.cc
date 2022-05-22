#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    while(T--) {
        int N, K; cin >> N >> K;

        vector<int> v(N);

        int curr;
        bool right;

        for(int i=0; i<N; i++) {
            int x; cin >> x;

            if(x == 2) {
                curr = i;
                right = true;
                v[i] = 1;
            }
            else if(x == 3) {
                curr = i;
                right = false;
                v[i] = 1;
            }
            else v[i] = x;
        }

        int cnt = 0, ans = 0;
        if(curr == 0 && !right) right = true;
        else if(curr == N-1 && right) right = false;

        while(true) {
            if(right) {
                curr++;
                if(v[curr] == 0) ans++;

                if(curr == N-1) right = false;
            }
            else {
                curr--;
                if(v[curr] == 0) ans++;

                if(curr == 0) right = true;
            }

            cnt++;
            if(cnt == K) break;
        }

        cout << ans << "\n";
    }
}
