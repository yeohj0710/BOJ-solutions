#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    string a, b;
    getline(cin, a);
    getline(cin, b);

    map<char, int> m1, m2;

    for(int i=0; i<a.length(); i++) m1[a[i]]++;
    for(int i=0; i<b.length(); i++) m2[b[i]]++;

    sort(a.begin(), a.end());
    a.erase(unique(a.begin(), a.end()), a.end());

    string ans = "";

    for(int i=0; i<a.length(); i++)
        if(m1[a[i]] * 2 == m2[a[i]]) ans += a[i];

    cout << ans << "\n";
}
