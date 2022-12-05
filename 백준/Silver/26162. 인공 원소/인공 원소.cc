#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int Max = 2e2;

    vector<bool> p(Max, true);
    p[0] = p[1] = false;

    for(int i=2; i*i<Max; i++)
        for(int j=2; i*j<Max; j++) p[i*j] = false;

    int T; cin >> T;

    while(T--) {
        int N; cin >> N;

        bool check = false;

        for(int i=1; i<N; i++)
            if(p[i] && p[N-i]) check = true;

        if(check) cout << "Yes\n";
        else cout << "No\n";
    }
}
