#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    while(true) {
        int N; cin >> N;
        if(N == 0) break;

        int M; cin >> M;

        vector<int> v(N);
        for(int i=0; i<N; i++) cin >> v[i];

        bool check = true;
        while(M--) {
            int a, b; cin >> a >> b;

            int cnt = 0;
            for(int i=0; i<a; i++) {
                int x; cin >> x;

                bool found = false;
                for(int j=0; j<N; j++)
                    if(v[j] == x) found = true;

                if(found) cnt++;
            }

            if(cnt < b) check = false;
        }

        if(check) cout << "yes\n";
        else cout << "no\n";
    }
}
