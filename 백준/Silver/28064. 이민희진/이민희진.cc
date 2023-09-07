#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N; cin >> N;

    vector<string> v(N);
    for(int i=0; i<N; i++) cin >> v[i];

    int ans = 0;

    for(int i=0; i<N; i++)
        for(int j=i+1; j<N; j++) {
            int len = min(v[i].length(), v[j].length());
            bool chk = false;

            for(int k=1; k<=len; k++)
                if((v[i].substr(0, k) == v[j].substr(v[j].length() - k, k))
                || v[i].substr(v[i].length() - k, k) == v[j].substr(0, k)) {
                    chk = true;
                    break;
                }

            if(chk) ans++;
        }

    cout << ans << "\n";
}
