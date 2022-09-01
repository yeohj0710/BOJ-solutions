#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N;

    while(cin >> N) {
        vector<int> v(N+1);

        for(int i=1; i<=N; i++) {
            int x; cin >> x;

            v[x] = i;
        }

        vector<int> u(N+1);

        for(int i=1; i<=N; i++) {
            int x; cin >> x;

            u[i] = v[x];
        }

        int ans = 0;

        for(int i=1; i<N; i++)
            for(int j=N; j>i; j--)
                if(u[j-1] > u[j]) {
                    swap(u[j-1], u[j]);

                    ans++;
                }

        cout << ans << "\n";
    }
}
