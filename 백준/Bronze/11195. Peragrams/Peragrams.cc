#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    string str; cin >> str;

    int cnt[26] = {};

    for(int i=0; i<str.length(); i++) cnt[str[i] - 'a']++;

    int sum = 0;
    for(int i=0; i<26; i++) sum += cnt[i] % 2;

    int ans;

    if(sum <= 1) ans = 0;
    else ans = sum - 1;

    cout << ans << "\n";
}
