#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    string a, b; cin >> a >> b;

    int cnt1[26] = {}, cnt2[26] = {};

    for(int i=0; i<a.length(); i++) cnt1[a[i] - 'a']++;
    for(int i=0; i<b.length(); i++) cnt2[b[i] - 'a']++;

    string ans = "";
    for(int i=0; i<26; i++)
        for(int j=0; j<min(cnt1[i], cnt2[i]); j++) ans += char('a' + i);

    cout << ans << "\n";
}
