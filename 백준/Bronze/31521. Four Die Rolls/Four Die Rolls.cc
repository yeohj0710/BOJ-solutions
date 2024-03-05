#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N; cin >> N;

    vector<int> v(N);
    for(int i=0; i<N; i++) cin >> v[i];

    int ans = 0;

    for(int i=1; i<=6; i++)
        for(int j=1; j<=6; j++)
            for(int k=1; k<=6; k++)
                for(int l=1; l<=6; l++) {
                    if(i == j || i == k || i == l || j == k || j == l || k == l) continue;

                    vector<int> u = {i, j, k, l};

                    bool chk = true;

                    for(int m=0; m<N; m++)
                        if(v[m] != u[m]) chk = false;

                    if(chk) ans++;
                }

    cout << ans << " " << (int)(pow((int)6, 4 - N)) - ans << "\n";
}
