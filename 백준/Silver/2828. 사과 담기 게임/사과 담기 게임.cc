#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M, J; cin >> N >> M >> J;

    int L = 1, R = M; // left end, right end of the basket

    int ans = 0;
    while(J--) {
        int pos; cin >> pos;

        if(pos < L) {
            ans += L - pos;
            L = pos;
            R = L + M - 1;
        }
        else if(pos > R) {
            ans += pos - R;
            R = pos;
            L = R - M + 1;
        }
    }

    cout << ans;
}
