#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    cout << fixed;
    cout.precision(2);

    for(int t=1; ; t++) {
        int N; cin >> N;
        if(N < 0) break;

        double sum_x = 0, sum_y = 0, sum_m = 0;
        for(int i=0; i<N; i++) {
            double x, y, m; cin >> x >> y >> m;

            sum_x += x*m;
            sum_y += y*m;
            sum_m += m;
        }

        cout << "Case " << t << ": " << sum_x/sum_m << " " << sum_y/sum_m << "\n";
    }
}
