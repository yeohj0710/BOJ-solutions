#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    string a, b; cin >> a >> b;

    int cnt1[26] = {}, cnt2[26] = {};

    for(int i=0; i<a.length(); i++)
        if(a[i] >= 'a' && a[i] <= 'z') cnt1[a[i] - 'a']++;
    for(int i=0; i<b.length(); i++)
        if(b[i] >= 'a' && b[i] <= 'z') cnt2[b[i] - 'a']++;

    bool check = true;
    for(int i=0; i<26; i++)
        if(cnt1[i] < cnt2[i]) check = false;

    if(check) cout << "A\n";
    else cout << "N\n";
}
