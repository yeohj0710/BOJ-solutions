#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int ans, N; cin >> ans >> N;

    ans = ans * (N + 1);

    for(int i=0; i<N; i++) {
        int x; cin >> x;

        ans -= x;
    }

    cout << ans << "\n";
}
