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

        if(N == 1) {
            cout << "IMPOSSIBLE\n";
            continue;
        }

        sort(v.begin(), v.end());

        bool check = true;

        if(v[1] > 200) check = false;
        if(v[N-1] < 1322) check = false;

        for(int i=1; i<N; i++)
            if(v[i] - v[i-1] > 200) check = false;

        if(check) cout << "POSSIBLE\n";
        else cout << "IMPOSSIBLE\n";
    }
}
