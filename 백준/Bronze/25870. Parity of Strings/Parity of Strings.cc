#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    string str; cin >> str;

    int cnt[26] = {};

    for(int i=0; i<str.length(); i++) cnt[str[i] - 'a']++;

    bool odd = true, even = true;

    for(int i=0; i<26; i++) {
        if(cnt[i] == 0) continue;

        if(cnt[i] % 2 == 0) odd = false;
        else even = false;
    }

    if(even) cout << 0 << "\n";
    else if(odd) cout << 1 << "\n";
    else cout << 2 << "\n";
}
