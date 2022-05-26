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

        for(int i=1; i<N; i++)
            if(v[i] != v[i-1] + 1) {
                cout << i+1 << "\n";
                break;
            }
    }
}
