#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int Max = 1e5;

    vector<bool> p(Max, true);
    p[1] = false;

    for(int i=2; i*i<Max; i++)
        for(int j=2; i*j<Max; j++) p[i*j] = false;

    vector<int> v;
    for(int i=2; i<Max; i++)
        if(p[i]) v.push_back(i);

    int T; cin >> T;

    while(T--) {
        int t, N; cin >> t >> N;

        cout << t << " " << N << " ";

        if(!p[N]) {
            cout << "NO\n";
            continue;
        }

        map<int, bool> m;
        m[N] = true;

        int x = N;
        bool check = false;

        while(true) {
            int y = 0;

            while(x > 0) {
                y += (x % 10) * (x % 10);
                x /= 10;
            }

            if(y == 1) {
                check = true;
                break;
            }
            if(m[y]) break;

            m[y] = true;
            x = y;
        }

        if(check) cout << "YES\n";
        else cout << "NO\n";
    }
}
