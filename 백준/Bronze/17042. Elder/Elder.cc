#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    char c; cin >> c;

    int N; cin >> N;

    vector<bool> v(26);
    v[c - 'A'] = true;

    while(N--) {
        char a, b; cin >> a >> b;

        if(b == c) {
            v[a - 'A'] = true;
            c = a;
        }
    }

    int ans = 0;
    for(int i=0; i<26; i++)
        if(v[i]) ans++;

    cout << c << "\n" << ans << "\n";
}
