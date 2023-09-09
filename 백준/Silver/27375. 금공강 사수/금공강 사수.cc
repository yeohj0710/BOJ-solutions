#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N, M; cin >> N >> M;

    vector<vector<int>> v(N, vector<int>(3));

    for(int i=0; i<N; i++)
        for(int j=0; j<3; j++) cin >> v[i][j];

    int ans = 0;

    for(int i=0; i<pow(2, N); i++) {
        int tmp = i;
        string str = "";

        for(int j=0; j<N; j++) {
            str += '0' + tmp % 2;
            tmp /= 2;
        }

        int sum = 0;

        for(int j=0; j<N; j++) {
            if(str[j] == '0' || v[j][0] == 5) continue;

            sum += v[j][2] - v[j][1] + 1;
        }

        if(sum != M) continue;

        vector<bool> u(51);
        bool chk = true;

        for(int j=0; j<N; j++) {
            if(str[j] == '1' && v[j][0] == 5) {
                chk = false;
                break;
            }

            if(str[j] == '0' || v[j][0] == 5) continue;

            for(int k=(v[j][0] - 1) * 10 + v[j][1]; k<=(v[j][0] - 1) * 10 + v[j][2]; k++) {
                if(u[k]) chk = false;

                u[k] = true;
            }
        }

        if(chk) ans++;
    }

    cout << ans << "\n";
}
