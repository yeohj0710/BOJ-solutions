#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    vector<int> cnt(M+1);
    for(int i=0; i<N; i++) {
        int x; cin >> x;

        cnt[x]++;
    }

    int Max = 0;
    for(int i=1; i<=M; i++) Max = max(Max, cnt[i]);

    cout << Max << "\n";
}
