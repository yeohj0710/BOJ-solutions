#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N; cin >> N;

    int ans = 0;

    for(int i=0; i*i<=N; i++)
        for(int j=0; j*j<=N; j++)
            for(int k=0; i*i+j*j+k*k<=N; k++) {
                int ll = N - (i*i + j*j + k*k);
                int l = sqrt(ll);

                if(l * l == ll) ans++;
            }

    cout << ans << "\n";
}
