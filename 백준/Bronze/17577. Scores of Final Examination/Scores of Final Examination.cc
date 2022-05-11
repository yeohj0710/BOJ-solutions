#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    while(true) {
        int N, M; cin >> N >> M;
        if(N == 0 && M == 0) break;

        int arr[51][1001];

        for(int i=0; i<M; i++)
            for(int j=0; j<N; j++) cin >> arr[i][j];

        int ans = 0;
        for(int i=0; i<N; i++) {
            int sum = 0;
            for(int j=0; j<M; j++) sum += arr[j][i];
            ans = max(ans, sum);
        }

        cout << ans << "\n";
    }
}
