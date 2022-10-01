#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    int a, b; cin >> a >> b;

    set<pair<int, int>> s;
    int ans = 0;

    while(N--) {
        int x, y; cin >> x >> y;

        if(s.count({x-a, y-b}) && s.count({x-a, y}) && s.count({x, y-b})) ans++;
        if(s.count({x-a, y+b}) && s.count({x-a, y}) && s.count({x, y+b})) ans++;
        if(s.count({x+a, y+b}) && s.count({x+a, y}) && s.count({x, y+b})) ans++;
        if(s.count({x+a, y-b}) && s.count({x+a, y}) && s.count({x, y-b})) ans++;

        s.insert({x, y});
    }

    cout << ans << "\n";
}
