#include <bits/stdc++.h>
#define int long long
using namespace std;

// 공부 목적으로 solution을 참고하였습니다.
// https://restudycafe.tistory.com/637

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    while(T--) {
        int N; cin >> N;

        vector<int> v(N), num(N);
        int e = 0, o = 0;

        for(int i=0; i<N; i++) {
            cin >> v[i];

            if(v[i] % 2 == 0) num[i] = ++e;
            else if(v[i] % 2 == 1) num[i] = ++o;
        }

        vector<int> olp(e+1), elp(o+1);

        // inversion 불가능한 i'번째 홀수와 j'번째 짝수 (홀수가 왼쪽)
        // olp[j'] : j'번째 짝수에 대해 가능한 odd's leftmost position


        // inversion 불가능한 i'번째 짝수와 j'번째 홀수 (짝수가 왼쪽)
        // elp[j'] : j'번째 홀수에 대해 가능한 even's leftmost position

        for(int i=0; i<N; i++)
            for(int j=i+1; j<N; j++)
                if(v[i] % 2 != v[j] % 2 && abs(v[i] - v[j]) > 1) {
                    if(v[j] % 2 == 0) olp[num[j]] = max(olp[num[j]], num[i]);
                    // olp[j'] : j'번째(= num[j]) 짝수 왼쪽에 있을 수 있는 홀수의 가장 왼쪽 번호 (max로 갱신하면서 왼쪽 임계값을 오른쪽으로 좁혀나감)

                    if(v[j] % 2 == 1) elp[num[j]] = max(elp[num[j]], num[i]);
                    // elp[j'] : j'번째(= num[j]) 홀수 왼쪽에 있을 수 있는 짝수의 가장 왼쪽 번호 (max로 갱신하면서 왼쪽 임계값을 오른쪽으로 좁혀나감)
                }

        vector<vector<int>> dp(e+1, vector<int>(o+1));
        dp[0][0] = 1;

        int mod = 1e9 + 7;

        for(int i=0; i<=e; i++)
            for(int j=0; j<=o; j++) {
                if(i > 0 && j >= olp[i]) dp[i][j] = (dp[i][j] + dp[i-1][j]) % mod;
                // j번째 홀수가 olp[i] = i번째 짝수 왼쪽에 있을 수 있는 홀수의 가장 왼쪽 번호와 같거나 오른쪽에 있어야 점화식 성립

                if(j > 0 && i >= elp[j]) dp[i][j] = (dp[i][j] + dp[i][j-1]) % mod;
                // i번째 짝수가 elp[j] = j번째 홀수 왼쪽에 있을 수 있는 짝수의 가장 왼쪽 번호와 같거나 오른쪽에 있어야 점화식 성립
            }

        int ans = dp[e][o];

        cout << ans << "\n";
    }
}
