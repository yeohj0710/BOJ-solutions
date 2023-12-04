#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N; cin >> N;

    string ans = "";

    while(N--) {
        string a, b; cin >> a >> b;

        for(int j=0; j<a.length(); j++)
            if(a[j] == 'x' || a[j] == 'X') ans += b[j];
    }

    for(int i=0; i<ans.length(); i++)
        if(ans[i] >= 'a' && ans[i] <= 'z') ans[i] += 'A' - 'a';

    cout << ans << "\n";
}
