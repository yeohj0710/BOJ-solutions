#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    for(int t=1; ; t++) {
        int L, P, V; cin >> L >> P >> V;
        if(!L && !P && !V) break;

        cout << "Case " << t << ": ";

        int ans = L * (V/P);
        V = V % P;
        ans += min(L, V);

        cout << ans << "\n";
    }
}
