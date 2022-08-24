#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    unordered_map<string, int> m;
    set<string> s;
    int ans = 0;

    while(N--) {
        string str; cin >> str;
        char c; cin >> c;

        if(c == '+') m[str]++;
        else {
            if(m[str] == 0) ans++;
            else m[str]--;
        }

        if(s.count(str) == 0) s.insert(str);
    }

    for(auto i : s) ans += m[i];

    cout << ans << "\n";
}
