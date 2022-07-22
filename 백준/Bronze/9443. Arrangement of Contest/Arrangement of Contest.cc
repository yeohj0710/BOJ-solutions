#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<string> v(N);
    for(int i=0; i<N; i++) cin >> v[i];

    int ans = 0;
    for(int i=0; i<26; i++) {
        bool check = false;
        for(int j=0; j<N; j++)
            if(v[j][0] == char('A' + i)) check = true;

        if(check) ans++;
        else break;
    }

    cout << ans << "\n";
}
