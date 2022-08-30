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
        for(int i=0; i<N; i++) cin >> v[i];

        bool check = true;

        for(int i=0; i<N; i++)
            for(int j=i+1; j<N; j++)
                for(int k=j+1; k<N; k++)
                    if(v[i] + v[k] == v[j] * 2) check = false;

        cout << "Case #" << t << ": ";

        if(check) cout << "YES\n";
        else cout << "NO\n";
    }
}
