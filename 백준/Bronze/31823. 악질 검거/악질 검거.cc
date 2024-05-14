#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N, M; cin >> N >> M;

    unordered_map<int, bool> m;

    int dif = 0;

    vector<pair<int, string>> v;

    while(N--) {
        int cnt = 0, ans = 0;

        for(int i=0; i<M; i++) {
            char ch; cin >> ch;

            if(ch == '*') {
                ans = max(ans, cnt);
                cnt = 0;
            }
            else cnt++;
        }

        ans = max(ans, cnt);

        string ss; cin >> ss;

        v.push_back({ans, ss});

        if(!m[ans]) {
            dif++;
            m[ans] = true;
        }
    }

    cout << dif << "\n";

    for(int i=0; i<v.size(); i++)
        cout << v[i].first << " " << v[i].second << "\n";
}
