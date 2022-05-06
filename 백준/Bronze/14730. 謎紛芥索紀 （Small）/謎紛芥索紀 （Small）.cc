#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    int ans = 0;
    for(int i=0; i<N; i++) {
        int a, b; cin >> a >> b;

        ans += a * b;
    }

    cout << ans << "\n";
}
