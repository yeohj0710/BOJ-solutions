#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    int cur = 0, ans = 0;

    while(M--) {
        string str; cin >> str;
        int x; cin >> x;

        if(str == "enter") {
            if(cur + x <= N) cur += x;
            else ans++;
        }
        else if(str == "leave") cur -= x;
    }

    cout << ans << "\n";
}
