#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    while(true) {
        int N, M; cin >> N >> M;
        if(N == 0 && M == 0) break;

        int ans = 0;
        for(int i=0; i<N; i++) {
            int x; cin >> x;
            ans += min(x, M/N);
        }

        cout << min(ans, M) << "\n";
    }
}
