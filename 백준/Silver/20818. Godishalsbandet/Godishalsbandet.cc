#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    string str; cin >> str;

    int N = str.length();

    str += str;

    vector<int> v(str.length() + 1);
    for(int i=1; i<=str.length(); i++) {
        if(str[i] == 'B') v[i] = v[i-1] + 1;
        else v[i] = v[i-1];
    }

    int ans = 0;

    for(int i=0; i<N; i++) ans = max(ans, v[i+N/2] - v[i]);

    cout << ans << "\n";
}
