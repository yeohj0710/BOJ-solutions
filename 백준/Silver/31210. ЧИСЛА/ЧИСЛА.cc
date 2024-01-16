#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N, M; cin >> N >> M;

    int ans = LLONG_MAX;

    for(int i=1; i<=18; i++) {
        for(int j=0; j<=9; j++) {
            string str = "";

            for(int k=0; k<i; k++) str += char('0' + j);

            if(M == 0) {
                int num = stoll(str);

                if(num >= N) ans = min(ans, num);
            }
            else if(M == 1) {
                for(int k=0; k<i; k++)
                    for(int l=0; l<=9; l++) {
                        if(l == j) continue;

                        string tmp = str;

                        str[k] = char('0' + l);

                        int num = stoll(str);

                        if(num >= N) ans = min(ans, num);

                        str = tmp;
                    }
            }
        }
    }

    cout << ans << "\n";
}
