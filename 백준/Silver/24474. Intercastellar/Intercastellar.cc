#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<int> v(N);
    for(int i=0; i<N; i++) cin >> v[i];

    int M; cin >> M;
    int i = 0, j = 0, cur = 0, prev = 0;

    while(M--) {
        int x; cin >> x;

        if(i < x) {
            while(i < x) {
                int a = v[j];
                while(a % 2 == 0) a /= 2;
                int b = v[j] / a;

                i += b;
                cur = a;
                j++;
            }

            cout << cur << "\n";
            prev = cur;
        }
        else cout << prev << "\n";
    }
}
