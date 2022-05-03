#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    for(int t=1; t<=T; t++) {
        long long a, b; cin >> a >> b;

        int ans = 0;
        for(long long i=1; i<=(int)pow(2e9, 1.0/3.0); i++)
            if(pow(i, 3) >= a && pow(i, 3) <= b) ans++;

        cout << "Case #" << t << ": " << ans << "\n";
    }
}
