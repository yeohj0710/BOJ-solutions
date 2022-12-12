#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    ios_base::sync_with_stdio(0), cin.tie(0);

    string str; cin >> str;

    int cnt[26] = {};
    for(int i=0; i<str.length(); i++) cnt[str[i] - 'A']++;

    int odd = 0;
    for(int i=0; i<26; i++)
        if(cnt[i] % 2 == 1) odd++;

    if(odd >= 2) {
        cout << "I'm Sorry Hansoo\n";
        return 0;
    }

    string ans = "";

    for(int i=0; i<26; i++) {
        while(cnt[i] >= 2) {
            ans += char('A' + i);
            cnt[i] -= 2;
        }
    }

    int l = ans.length();

    for(int i=0; i<26; i++)
        if(cnt[i] > 0) ans += char('A' + i);

    for(int i=l-1; i>=0; i--) ans += ans[i];

    cout << ans << "\n";
}
