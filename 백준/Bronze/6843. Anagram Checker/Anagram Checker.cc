#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    ios::sync_with_stdio(0), cin.tie(0);

    string a, b;

    getline(cin, a);
    getline(cin, b);

    vector<int> v(26), u(26);

    for(int i=0; i<a.length(); i++)
        if(a[i] >= 'A' && a[i] <= 'Z') v[a[i] - 'A']++;

    for(int i=0; i<b.length(); i++)
        if(b[i] >= 'A' && b[i] <= 'Z') u[b[i] - 'A']++;

    if(u == v) cout << "Is an anagram.\n";
    else cout << "Is not an anagram.\n";
}
