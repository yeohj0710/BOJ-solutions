#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    ios_base::sync_with_stdio(0), cin.tie(0);

    int N; cin >> N;

    for(int i=0; i<N; i++) {
        int a = 0;

        for(int j=0; j<N; j++) {
            int b; cin >> b;

            a = (a | b);
        }

        cout << a << " ";
    }
    cout << "\n";
}
