#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<string> v(N);
    for(int i=0; i<N; i++) cin >> v[i];

    string ans = "";

    for(int i=0; i<v[0].length(); i++) {
        bool check = true;

        for(int j=1; j<N; j++)
            if(v[j][i] != v[0][i]) check = false;

        if(check) ans += v[0][i];
        else ans += '?';
    }

    cout << ans << "\n";
}
