#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    while(T--) {
        int ans = 0;

        int prev = 1;
        while(true) {
            int curr; cin >> curr;
            if(curr == 0) break;

            if(curr > prev*2) ans += curr - prev*2;

            prev = curr;
        }

        cout << ans << "\n";
    }
}
