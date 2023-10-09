#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int a, b, c, d, N; cin >> a >> b >> c >> d >> N;

    int x, y, mn = INT_MAX;

    for(int i=0; ; i++) {
        for(int j=0; ; j++) {
            if(i*b + j*d >= N) {
                int sum = i*a + j*c;

                if(sum < mn) {
                    mn = sum;
                    x = i, y = j;
                }

                break;
            }
        }
        if(i*b >= N) break;
    }

    cout << x << " " << y << " " << mn << "\n";
}
