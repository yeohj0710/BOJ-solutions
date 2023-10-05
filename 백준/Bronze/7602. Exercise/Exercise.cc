#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    for(int t=1; ; t++) {
        int N; cin >> N;

        if(N == 0) break;

        cout << "Machine " << t << "\n";

        vector<int> v(N+1);
        for(int i=1; i<=N; i++) cin >> v[i];

        while(true) {
            string str; int M; cin >> str >> M;

            if(str == "#" && M == 0) break;

            int sum = 0;

            while(M--) {
                int a, b; cin >> a >> b;

                sum += v[a] * b;
            }

            cout << str << " " << sum << "\n";
        }
    }
}
