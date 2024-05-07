#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N; cin >> N;

    vector<int> v(N);

    for(int i=0; i<N; i++) cin >> v[i];

    double ans = 100;

    int a = 0, b = 0;

    for(int i=0; i<N; i++) {
        if(a == 0) {
            bool chk = true;

            if(i > 0 && v[i] < v[i-1]) chk = false;
            if(i < N-1 && v[i] < v[i+1]) chk = false;

            if(chk) a = v[i];
        }
        else {
            bool chk = true;

            if(i > 0 && v[i] > v[i-1]) chk = false;
            if(i < N-1 && v[i] > v[i+1]) chk = false;

            if(chk) {
                b = v[i];

                ans = ans * a / b;

                a = 0, b = 0;
            }
        }
    }

    cout << fixed << setprecision(2);

    cout << ans << "\n";
}
