#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    for(int t=1; ; t++) {
        int N, M; cin >> N >> M;
        if(N == 0 && M == 0) break;

        vector<int> v(N);

        for(int i=0; i<N; i++) {
            string str; cin >> str;

            v[i] = str.length();
        }

        sort(v.begin(), v.end());

        bool check = true;

        for(int i=0; i<N-M+1; i+=M) {
            int x = 0;

            for(int j=0; j<M; j++) x += v[i+j];

            x /= M;

            bool flag = true;

            for(int j=0; j<M; j++)
                if(abs(x - v[i+j]) > 2) flag = false;

            if(!flag) check = false;
        }

        cout << "Case " << t << ": ";

        if(check) cout << "yes\n\n";
        else cout << "no\n\n";
    }
}
