#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<string> v(N);
    for(int i=0; i<N; i++) cin >> v[i];

    bool ch[26] = {};
    for(int i=0; i<N; i++) ch[v[i][0] - 'A'] = true;

    bool ans = false;
    for(int i=0; i<N; i++) {
        bool check = true;
        for(int j=0; j<v[i].length(); j++)
            if(!ch[v[i][j] - 'A']) check = false;

        if(check) ans = true;
    }

    if(ans) cout << "Y\n";
    else cout << "N\n";
}
