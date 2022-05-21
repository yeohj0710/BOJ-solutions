#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    while(T--) {
        string a, b; cin >> a >> b;

        int cnt1[26] = {}, cnt2[26] = {};

        for(int i=0; i<a.length(); i++) cnt1[a[i] - 'A']++;
        for(int i=0; i<b.length(); i++) cnt2[b[i] - 'A'] = 1;

        bool check = true;
        for(int i=0; i<26; i++)
            if(cnt1[i] != cnt2[i]) check = false;

        if(check) cout << "YES\n";
        else cout << "NO\n";
    }
}
