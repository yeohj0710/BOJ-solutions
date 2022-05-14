#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    int cnt[10001] = {};

    for(int i=0; i<N; i++) {
        int x; cin >> x;

        cnt[x]++;
    }

    int ans = 0;
    for(int i=1; i<=10000; i++) ans = max(ans, cnt[i]);

    for(int i=1; i<=10000; i++)
        if(cnt[i] == ans) {
            cout << i << "\n";
            break;
        }
}
