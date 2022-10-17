#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    string a, b; cin >> a >> b;

    vector<int> v(26);

    for(int i=0; i<N; i++) {
        if(a[i] == b[i]) v[a[i] - 'a']++;
        else {
            v[a[i] - 'a']++;
            v[b[i] - 'a']++;
        }
    }

    int ans = 0;

    for(int i=0; i<26; i++) ans = max(ans, v[i]);

    cout << ans << "\n";
}
