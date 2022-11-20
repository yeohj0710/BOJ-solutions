#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    string str; cin >> str;

    vector<int> v(5);
    string s = "HIARC";

    for(int i=0; i<N; i++)
        for(int j=0; j<5; j++)
            if(str[i] == s[j]) v[j]++;

    int ans = INT_MAX;

    for(int i=0; i<5; i++) ans = min(ans, v[i]);

    cout << ans << "\n";
}
