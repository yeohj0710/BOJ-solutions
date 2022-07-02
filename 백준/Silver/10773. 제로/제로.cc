#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    stack<int> s;
    while(N--) {
        int x; cin >> x;

        if(x != 0) s.push(x);
        else s.pop();
    }

    int ans = 0;
    while(!s.empty()) {
        ans += s.top();
        s.pop();
    }

    cout << ans << "\n";
}
