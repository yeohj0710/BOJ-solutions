#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    while(T--) {
        int N, D; cin >> N >> D;

        int ans = 0;
        for(int i=0; i<N; i++) {
            double v, f, c; cin >> v >> f >> c;

            if(v*f/c >= D) ans++;
        }

        cout << ans << "\n";
    }
}
