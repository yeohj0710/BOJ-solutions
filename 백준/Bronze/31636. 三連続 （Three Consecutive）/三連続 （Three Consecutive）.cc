#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N; cin >> N;

    string s; cin >> s;

    bool chk = false;

    for(int i=2; i<N; i++)
        if(s[i-2] == 'o' && s[i-1] == 'o' && s[i] == 'o') chk = true;

    if(chk) cout << "Yes\n";
    else cout << "No\n";
}
