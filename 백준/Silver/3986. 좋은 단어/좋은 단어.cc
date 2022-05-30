#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    int ans = 0;

    while(N--) {
        string str; cin >> str;

        if(str.length() % 2 == 1) continue;

        stack<char> s;
        s.push(str[0]);

        for(int i=1; i<str.length(); i++) {
            if(s.empty() || str[i] != s.top()) s.push(str[i]);
            else s.pop();
        }

        if(s.empty()) ans++;
    }

    cout << ans << "\n";
}
