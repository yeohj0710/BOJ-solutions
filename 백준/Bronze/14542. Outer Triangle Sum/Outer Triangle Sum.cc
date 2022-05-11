#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    for(int t=1; ; t++) {
        int N; cin >> N;
        if(N == 0) break;

        int arr[11][11] = {};

        int ans = 0;
        for(int i=0; i<N; i++)
            for(int j=0; j<=i; j++) {
                int x; cin >> x;

                if(i == N-1 || j == 0 || i == j) ans += x;
            }

        cout << "Case #" << t << ":" << ans << "\n";
    }
}
