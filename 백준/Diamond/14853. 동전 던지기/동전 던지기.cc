#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    while(T--) {
        double n1, m1, n2, m2; cin >> n1 >> m1 >> n2 >> m2;

        double temp = 1;
        for(int i=0; i<=m1; i++)
            temp = temp * (n1 + 1 - i) / (n1 + n2 + 2 - i);

        double ans = temp;
        for(int i=1; i<=m2; i++) {
            temp = temp * (m1 + i)/i * (n2 + 2 - i)/(n1 + n2 - m1 + 2 - i);
            ans += temp;
        }

        cout << ans << "\n";
    }
}
