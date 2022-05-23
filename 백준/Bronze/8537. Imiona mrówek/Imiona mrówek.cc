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

        vector<bool> check(26, false);

        for(int i=0; i<str.length(); i++) check[str[i] - 'a'] = true;

        int cnt = 0;
        for(int i=0; i<26; i++)
            if(check[i]) cnt++;

        ans = max(ans, cnt);
    }

    cout << ans << "\n";
}
