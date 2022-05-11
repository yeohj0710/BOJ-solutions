#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, X; cin >> N >> X;

    int ans = 0;

    while(N--) {
        int a, b; cin >> a >> b;

        if(abs(a - b) <= X) ans += max(a, b);
        else {
            int c; cin >> c;
            ans += c;
        }
    }

    cout << ans << "\n";
}
