#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    for(int t=1; ; t++) {
        int N; cin >> N;

        if(N == 0) break;

        cout << "Case " << t << ":\n";
        cout << N << " pencils for " << N << " cents\n";

        N *= 4;

        bool chk = false;

        for(int i=1; i*16<=N; i++)
            for(int j=1; i*16+j*2<=N; j++) {
                int k = N - i * 16 - j * 2;

                if(k <= 0) continue;
                if(i + j + k != N / 4) continue;

                chk = true;

                cout << i << " at four cents each\n";
                cout << j << " at two for a penny\n";
                cout << k << " at four for a penny\n";
                cout << "\n";
            }

        if(!chk) cout << "No solution found.\n\n";
    }
}
