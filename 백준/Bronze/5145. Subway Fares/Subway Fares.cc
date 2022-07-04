#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    for(int t=1; t<=T; t++) {
        int N; cin >> N;

        vector<int> v(N);
        for(int i=1; i<=N-1; i++) cin >> v[i];

        vector<string> u(N);
        for(int i=0; i<N; i++) cin >> u[i];

        string a, b; cin >> a >> b;

        int x, y;
        for(int i=0; i<N; i++) {
            if(u[i] == a) x = i;
            if(u[i] == b) y = i;
        }

        cout << "Data Set " << t << ":\n";
        cout << v[abs(x-y)] << "\n\n";
    }
}
