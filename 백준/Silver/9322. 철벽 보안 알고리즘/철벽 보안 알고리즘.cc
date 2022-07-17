#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    while(T--) {
        int N; cin >> N;

        map<string, int> m;

        for(int i=0; i<N; i++) {
            string str; cin >> str;

            m[str] = i;
        }

        vector<int> v(N);

        for(int i=0; i<N; i++) {
            string str; cin >> str;

            v[i] = m[str];
        }

        vector<string> u(N);

        for(int i=0; i<N; i++) {
            string str; cin >> str;

            u[v[i]] = str;
        }

        for(int i=0; i<N; i++) cout << u[i] << " ";
        cout << "\n";
    }
}
