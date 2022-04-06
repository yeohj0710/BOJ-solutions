#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    while(true) {
        int n; cin >> n;
        if(n == -1) break;

        int sum = 0, prev = 0;
        while(n--) {
            int a, b; cin >> a >> b;
            sum += a*(b-prev);
            prev = b;
        }

        cout << sum << " miles\n";
    }
}
