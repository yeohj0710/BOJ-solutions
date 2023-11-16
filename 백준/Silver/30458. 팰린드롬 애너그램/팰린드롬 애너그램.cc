#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N; string str; cin >> N >> str;

    vector<int> v(26);

    for(int i=0; i<N/2; i++) v[str[i] - 'a']++;
    for(int i=(N+1)/2; i<N; i++) v[str[i] - 'a']++;

    bool chk = true;

    for(int i=0; i<26; i++)
        if(v[i] % 2 == 1) chk = false;

    if(chk) cout << "Yes\n";
    else cout << "No\n";
}
