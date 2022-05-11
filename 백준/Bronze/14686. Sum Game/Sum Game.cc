#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<int> u(N), v(N);

    for(int i=0; i<N; i++) cin >> u[i];
    for(int i=0; i<N; i++) cin >> v[i];

    int sumu = 0, sumv = 0;

    int ans = 0;
    for(int i=0; i<N; i++) {
        sumu += u[i];
        sumv += v[i];

        if(sumu == sumv) ans = i + 1;
    }

    cout << ans << "\n";
}
