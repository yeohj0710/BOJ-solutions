#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    int cnt[2001] = {};

    for(int i=0; i<N; i++) {
        int x; cin >> x;

        cnt[x]++;
    }

    int Min = INT_MAX;
    for(int i=1; i<=2000; i++)
        if(cnt[i] != 0) Min = min(Min, cnt[i]);

    vector<int> ans;
    for(int i=1; i<=2000; i++)
        if(cnt[i] == Min) ans.push_back(i);

    sort(ans.begin(), ans.end());

    cout << ans[0] << "\n";
}
