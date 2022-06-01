#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    vector<int> v(N+1);

    int maxa = 0, maxb = 0, a = 0, b = 0;
    for(int i=1; i<=M; i++) {
        int x, y; cin >> x >> y;

        if(y - x + 1 > maxa) {
            maxa = y - x + 1;
            a = i;
        }

        int cnt = 0;
        for(int j=x; j<=y; j++)
            if(v[j] == 0) {
                cnt++;
                v[j] = i;
            }

        if(cnt > maxb) {
            maxb = cnt;
            b = i;
        }
    }

    cout << a << "\n" << b << "\n";
}
