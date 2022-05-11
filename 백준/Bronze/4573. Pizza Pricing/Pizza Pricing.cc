#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    for(int t=1; ; t++) {
        int N; cin >> N;
        if(N == 0) break;

        int ans, Max = 0;
        while(N--) {
            double a, b; cin >> a >> b;

            if((a * a) / b > Max) {
                Max = (a * a) / b;
                ans = a;
            }
        }

        cout << "Menu " << t << ": " << ans << "\n";
    }
}
