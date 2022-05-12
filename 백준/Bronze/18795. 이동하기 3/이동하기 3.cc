#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    long long ans = 0;
    for(int i=0; i<N+M; i++) {
        long long x; cin >> x;

        ans += x;
    }

    cout << ans << "\n";
}
