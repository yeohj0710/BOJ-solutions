#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    while(true) {
        int N; cin >> N;

        if(N == 0) break;

        unordered_map<string, pair<int, int>> m;

        while(N--) {
            string a; int b, c; cin >> a >> b >> c;

            m[a] = {b, c};
        }

        int M; cin >> M;

        int cnt = 0;

        while(M--) {
            int a, b, c; cin >> a >> b >> c;

            int sum = 0;
            bool chk = false;

            while(b--) {
                string str; cin >> str;

                if(m[str].second > c) chk = true;
                else sum += m[str].first;
            }

            cout << a << " " << sum;

            if(chk) {
                cout << " *";
                cnt++;
            }

            cout << "\n";
        }

        cout << "Number of discontented customers is: " << cnt << "\n";
    }
}
