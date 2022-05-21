#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    while(T--) {
        int N, M; cin >> N >> M;

        int arr[5][100] = {};

        for(int i=0; i<M; i++)
            for(int j=0; j<N; j++) cin >> arr[j][i];

        int sum[5] = {};
        for(int i=0; i<N; i++)
            for(int j=0; j<M; j++) sum[i] += arr[i][j];

        int Max = 0, ans;
        for(int i=0; i<5; i++) {
            if(sum[i] > Max) {
                Max = sum[i];
                ans = i;
            }
        }

        cout << ans+1 << "\n";
    }
}
