#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    while(T--) {
        int N, a, b; cin >> N >> a >> b;

        vector<int> v(N);
        for(int i=0; i<N; i++) cin >> v[i];

        if(v[0] == a && v[N-1] == b) cout << "BOTH\n";
        else if(v[0] == a) cout << "EASY\n";
        else if(v[N-1] == b) cout << "HARD\n";
        else cout << "OKAY\n";
    }
}
