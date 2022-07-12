#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    string str; cin >> str;

    int N; cin >> N;

    vector<string> v(N);
    for(int i=0; i<N; i++) cin >> v[i];

    vector<bool> dp(str.length()+1, false);
    dp[str.length()] = true;

    for(int i=str.length()-1; i>=0; i--)
        for(int j=0; j<N; j++) {
            if(i + v[j].length() > str.length()) continue;
            if(str.substr(i, v[j].length()) != v[j]) continue;

            if(dp[i + v[j].length()]) dp[i] = true;
        }

    if(dp[0]) cout << 1 << "\n";
    else cout << 0 << "\n";
}
