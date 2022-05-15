#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    while(T--) {
        int N; cin >> N;

        vector<int> v(N);
        for(int i=0; i<N; i++) cin >> v[i];

        bool check = true;
        for(int i=0; i<N-2; i++)
            if(v[i] + v[i+1] != v[i+2]) check = false;

        if(check) cout << "YES\n";
        else cout << "NO\n";
    }
}
