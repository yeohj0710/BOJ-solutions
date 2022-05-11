#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    int ans = 0;
    for(int i=0; i<N; i++) {
        int x; cin >> x;

        if(i % 2 == 0) ans += (min(x, 7) - 2);
        else ans += (min(x, 7) - 3);
    }

    cout << ans << "\n";
}
