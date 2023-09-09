#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N, M; cin >> N >> M;

    vector<int> v(101);

    while(N--) {
        int a, b, c; cin >> a >> b >> c;

        for(int i=a; i<=b; i++) v[i] += c;
    }

    vector<vector<int>> u(M, vector<int>(4));

    for(int i=0; i<M; i++)
        for(int j=0; j<4; j++) cin >> u[i][j];

    int ans = INT_MAX;

    for(int i=0; i<pow(2, M); i++) {
        int tmp = i;
        string str = "";

        for(int j=0; j<M; j++) {
            str += '0' + tmp % 2;
            tmp /= 2;
        }

        vector<int> w(v);
        int sum = 0;

        for(int j=0; j<M; j++) {
            if(str[j] == '0') continue;

            for(int k=u[j][0]; k<=u[j][1]; k++) w[k] -= u[j][2];

            sum += u[j][3];
        }

        bool chk = true;

        for(int j=1; j<=100; j++)
            if(w[j] > 0) {
                chk = false;
                break;
            }

        if(chk) ans = min(ans, sum);
    }

    cout << ans << "\n";
}
