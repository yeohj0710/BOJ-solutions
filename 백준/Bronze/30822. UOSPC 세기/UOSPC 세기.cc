#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    vector<int> v(5);
    string s = "uospc";

    int N; string str; cin >> N >> str;

    for(int i=0; i<str.length(); i++)
        for(int j=0; j<s.length(); j++)
            if(str[i] == s[j]) v[j]++;

    int ans = INT_MAX;

    for(int i=0; i<v.size(); i++) ans = min(ans, v[i]);

    cout << ans << "\n";
}
