#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    while(T--) {
        int N, M; cin >> N >> M;

        map<string, int> ms, mm, ml;

        for(int i=0; i<N; i++) {
            string str; cin >> str;

            int a, b, c; cin >> a >> b >> c;

            ms[str] = a;
            mm[str] = b;
            ml[str] = c;
        }

        for(int i=0; i<M; i++) {
            string a, b, c; cin >> a >> b >> c;

            int ans = 0;

            if(b == "small") ans += ms[c];
            else if(b == "medium") ans += mm[c];
            else if(b == "large") ans += ml[c];

            ans += 100 / M;

            if(ans % 5 == 1) ans--;
            else if(ans % 5 == 4) ans++;

            cout << a << " " << ans << "\n";
        }
    }
}
