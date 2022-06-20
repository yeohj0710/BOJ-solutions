#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    int cnt[1001] = {};
    for(int i=0; i<N; i++) {
        int x; cin >> x;
        cnt[x]++;
    }

    int Max = 0;
    for(int i=1; i<=1000; i++) Max = max(Max, cnt[i]);

    vector<int> v;
    for(int i=1; i<=1000; i++)
        if(cnt[i] == Max) v.push_back(i);

    if(v.size() >= 2) {
        cout << v.back() - v.front() << "\n";
        return 0;
    }

    int Max2 = 0;
    for(int i=1; i<=1000; i++) {
        if(cnt[i] == Max) continue;
        Max2 = max(Max2, cnt[i]);
    }

    vector<int> u;
    for(int i=1; i<=1000; i++)
        if(cnt[i] == Max2) u.push_back(i);

    int ans = 0;
    for(int i=0; i<u.size(); i++) ans = max(ans, abs(v[0] - u[i]));

    cout << ans << "\n";
}
