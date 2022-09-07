#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    while(true) {
        int N; cin >> N;
        if(N == 0) break;

        int R, C; cin >> R >> C;

        vector<vector<bool>> v(R, vector<bool>(C));

        while(N--) {
            int x, y; cin >> x >> y;

            v[x-1][y-1] = true;
        }

        int a, b; cin >> a >> b;

        int ans = 0;

        for(int i=0; i<R-a+1; i++)
            for(int j=0; j<C-b+1; j++) {
                int cnt = 0;

                for(int k=i; k<i+a; k++)
                    for(int l=j; l<j+b; l++)
                        if(v[k][l]) cnt++;

                ans = max(ans, cnt);
            }

        cout << ans << "\n";
    }
}
