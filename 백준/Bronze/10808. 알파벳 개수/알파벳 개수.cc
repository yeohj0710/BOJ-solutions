#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    string str; cin >> str;

    int cnt[26] = {};
    for(int i=0; i<str.length(); i++) cnt[str[i] - 'a']++;

    for(int i=0; i<26; i++) cout << cnt[i] << " ";
    cout << "\n";
}
