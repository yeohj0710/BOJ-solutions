#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N; cin >> N;

    vector<string> v(N);
    for(int i=0; i<N; i++) cin >> v[i];

    int mx = 0;

    for(int i=0; i<5; i++) {
        int cnt = 0;

        for(int j=0; j<N; j++)
            if(v[j][i] == 'Y') cnt++;

        mx = max(mx, cnt);
    }

    vector<int> ans;

    for(int i=0; i<5; i++) {
        int cnt = 0;

        for(int j=0; j<N; j++)
            if(v[j][i] == 'Y') cnt++;

        if(cnt == mx) ans.push_back(i+1);
    }

    for(int i=0; i<ans.size(); i++) {
        if(i > 0) cout << ",";
        cout << ans[i];
    }
    cout << "\n";
}
