#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    string str; cin >> str;

    vector<int> v(26);

    for(int i=0; i<str.length(); i++) v[str[i] - 'a']++;

    bool b1 = true, b2 = true;

    for(int i=0; i<26; i++) {
        if(v[i] == 0) continue;

        if(v[i] % 2 == 0) b1 = false;
        if(v[i] % 2 == 1) b2 = false;
    }

    if(b1 && !b2) cout << 1 << "\n";
    else if(!b1 && b2) cout << 0 << "\n";
    else cout << 0 << "/" << 1 << "\n";
}
