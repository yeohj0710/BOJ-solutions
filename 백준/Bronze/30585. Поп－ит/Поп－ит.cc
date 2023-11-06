#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N, M; cin >> N >> M;

    int x = 0;

    for(int i=0; i<N; i++)
        for(int j=0; j<M; j++) {
            char ch; cin >> ch;

            if(ch == '0') x++;
        }

    cout << min(x, N * M - x) << "\n";
}
