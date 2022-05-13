#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    while(true) {
        int N; cin >> N;
        if(N == 0) break;

        vector<int> v(N);
        for(int i=0; i<N; i++) cin >> v[i];

        int cnt = 0;
        for(int i=3; i<N; i++)
            if(v[i-3] == 2 && v[i-2] == 0 && v[i-1] == 2 && v[i] == 0) cnt++;

        cout << cnt << "\n";
    }
}
