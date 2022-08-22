#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    while(T--) {
        int N, M; cin >> N >> M;

        map<pair<string, int>, int> m;
        int ans = 0;

        while(N--) {
            string str; cin >> str;

            int cnt = 0;

            for(int i=0; i<M; i++) {
                if(str[i] >= 'A' && str[i] <= 'Z') {
                    str[i] += 'a' - 'A';
                    cnt++;
                }
            }

            sort(str.begin(), str.end());

            ans += m[{str, cnt}];

            m[{str, cnt}]++;
        }

        cout << ans << "\n";
    }
}
