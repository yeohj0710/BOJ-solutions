#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    int Min = INT_MAX, ans = 0;

    for(int i=1; i<=N; i++) {
        int x; cin >> x;
        string str; cin >> str;

        int cnt[10] = {};

        for(int j=0; j<str.length(); j++) cnt[str[j] - '0']++;

        if(cnt[0] >= 1 && cnt[1] >= 1 && cnt[2] >= 2) {
            if(x < Min) {
                Min = x;
                ans = i;
            }
        }
    }

    cout << ans << "\n";
}
