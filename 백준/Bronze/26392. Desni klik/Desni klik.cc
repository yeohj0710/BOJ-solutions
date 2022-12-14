#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    ios_base::sync_with_stdio(0), cin.tie(0);

    int T, N, M; cin >> T >> N >> M;

    while(T--) {
        int Min = INT_MAX, Max = INT_MIN;

        for(int i=N; i>=1; i--)
            for(int j=1; j<=M; j++) {
                char ch; cin >> ch;

                if(ch == '#') {
                    Min = min(Min, i);
                    Max = max(Max, i);
                }
            }

        cout << Max - Min << "\n";
    }
}
