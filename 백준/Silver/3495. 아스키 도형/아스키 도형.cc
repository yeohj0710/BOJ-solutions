#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    ios_base::sync_with_stdio(0), cin.tie(0);

    int N, M; cin >> N >> M;

    int ans = 0, cnt = 0;

    for(int i=0; i<N; i++)
        for(int j=0; j<M; j++) {
            char ch; cin >> ch;

            if(ch == '/' || ch == '\\') ans++, cnt++;
            else if(ch == '.' && cnt % 2 == 1) ans += 2;
        }

    ans /= 2;

    cout << ans << "\n";
}
