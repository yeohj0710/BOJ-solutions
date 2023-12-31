#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N, M; cin >> N >> M;

    int ans = 0;

    while(N--) {
        string str; cin >> str;

        int cnt = 0;

        for(int i=0; i<M; i++)
            if(str[i] == 'O') cnt++;

        if(cnt > M - cnt) ans++;
    }

    cout << ans << "\n";
}
