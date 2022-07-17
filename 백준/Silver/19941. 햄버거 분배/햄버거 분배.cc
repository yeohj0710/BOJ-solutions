#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    string str; cin >> str;

    int ans = 0;
    vector<bool> v(N);

    for(int i=0; i<str.length(); i++) {
        if(str[i] == 'H') continue;

        for(int j=i-M; j<=i+M; j++) {
            if(j < 0 || j >= N) continue;
            if(str[j] != 'H' || v[j]) continue;

            ans++;
            v[j] = true;
            break;
        }
    }

    cout << ans << "\n";
}
