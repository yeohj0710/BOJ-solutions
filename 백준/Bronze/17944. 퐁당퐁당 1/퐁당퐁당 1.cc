#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    int ans = 0;
    bool inc = true;

    for(int i=0; i<M; i++) {
        if(inc) ans++;
        else ans--;

        if(ans == N * 2) inc = false;
        if(ans == 1) inc = true;
    }

    cout << ans << "\n";
}
