#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M, K; cin >> N >> M >> K;

    int ans = 0;

    for(int i=N; i<=M; i++) {
        bool check = true;

        for(int j=2; j<=K; j++) {
            int tmp = i;
            vector<int> v;

            while(tmp > 0) {
                v.push_back(tmp % j);
                tmp /= j;
            }

            for(int k=0; k<v.size(); k++)
                if(v[k] != v[v.size()-1-k]) check = false;

            if(!check) break;
        }

        if(check) ans++;
    }

    cout << ans << "\n";
}
