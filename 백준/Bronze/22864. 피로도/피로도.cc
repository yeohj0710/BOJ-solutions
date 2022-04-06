#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int A, B, C, M; cin >> A >> B >> C >> M;

    int ans = 0, curr = 0;

    for(int time = 0; time < 24; time++) {
        if(curr + A <= M) {
            curr += A;
            ans += B;
        }
        else curr = max(curr - C, 0);
    }

    cout << ans;
}
