#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    ios::sync_with_stdio(0), cin.tie(0);

    int N, a, b, c, d; cin >> N >> a >> b >> c >> d;

    int x, y, Max = INT_MIN;

    for(int i=0; i*b<=N; i++) {
        int val = a * i + c * ((N - i*b) / d);

        if(val > Max) {
            Max = val;
            x = i, y = (N - i*b) / d;
        }
    }

    cout << x << " " << y << "\n";
}
