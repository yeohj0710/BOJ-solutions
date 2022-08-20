#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    set<string> s;

    while(N--) {
        int M; cin >> M;

        vector<string> v(M);

        for(int i=0; i<M; i++) cin >> v[i];

        for(int i=0; i<M; i++) {
            if(s.count(v[i]) == 0) {
                cout << v[i] << " ";

                s.insert(v[i]);

                break;
            }
        }
    }
    cout << "\n";
}
