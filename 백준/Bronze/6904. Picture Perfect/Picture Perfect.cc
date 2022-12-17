#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    ios::sync_with_stdio(0), cin.tie(0);

    while(true) {
        int N; cin >> N;
        if(N == 0) break;

        int Min = INT_MAX, a, b;

        for(int i=1; i*i<=N; i++) {
            if(N % i != 0) continue;

            int sum = (i + (N / i)) * 2;

            if(sum < Min) {
                Min = sum;

                a = i, b = N / i;
            }
        }

        cout << "Minimum perimeter is " << Min << " with dimensions " << a << " x " << b << "\n";
    }
}
