#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    while(true) {
        int N, M; cin >> N >> M;
        if(N == 0 && M == 0) break;

        vector<string> v(N);
        for(int i=0; i<N; i++) cin >> v[i];

        string str; cin >> str;

        int ans = str.length();

        for(int i=0; i<N; i++)
            for(int j=0; j<M; j++)
                if(v[i][j] == str[0]) ans += i + j;

        for(int i=1; i<str.length(); i++) {
            int x1, y1, x2, y2;

            for(int j=0; j<N; j++)
                for(int k=0; k<M; k++) {
                    if(v[j][k] == str[i-1]) x1 = j, y1 = k;
                    if(v[j][k] == str[i]) x2 = j, y2 = k;
                }

            ans += abs(x1 - x2) + abs(y1 - y2);
        }

        cout << ans << "\n";
    }
}
