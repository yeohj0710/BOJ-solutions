#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    map<string, int> m;

    int ans = 0;

    for(int i=0; i<N; i++) {
        string str; cin >> str;

        if(i != 0 && m[str] > i/2) ans++;

        m[str]++;
    }

    cout << ans << "\n";
}
