#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    while(T--) {
        int N; cin >> N;

        vector<int> v(11);
        while(N--) {
            int a, b; cin >> a >> b;

            v[b] = max(v[b], a);
        }

        bool check = true;
        for(int i=1; i<=10; i++)
            if(v[i] == 0) check = false;

        if(!check) cout << "MOREPROBLEMS\n";
        else {
            int ans = 0;
            for(int i=1; i<=10; i++) ans += v[i];

            cout << ans << "\n";
        }
    }
}
