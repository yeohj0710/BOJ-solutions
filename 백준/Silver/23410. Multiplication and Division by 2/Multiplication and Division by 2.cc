#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int mod = 4294967296;

    int T; cin >> T;

    while(T--) {
        int a, b; cin >> a >> b;

        map<int, bool> m;
        m[a] = true;

        queue<int> q;
        q.push(a);

        bool check = false;

        while(!q.empty()) {
            int x = q.front();
            q.pop();

            if(x == b) {
                check = true;
                break;
            }

            if(!m[(x*2) % mod]) {
                m[(x*2) % mod] = true;
                q.push((x*2) % mod);
            }
            if(!m[x/2]) {
                m[x/2] = true;
                q.push(x/2);
            }
        }

        if(check) cout << "Yes\n";
        else cout << "No\n";
    }
}
