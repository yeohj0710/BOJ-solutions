#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N; cin >> N;

    string str; cin >> str;

    int ans = 0;

    for(int i=1; i<str.length(); i++)
        if(str[i] != str[i-1]) ans++, i++;

    cout << ans << "\n";
}
