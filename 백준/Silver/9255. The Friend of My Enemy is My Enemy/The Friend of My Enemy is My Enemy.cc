#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    for(int t=1; t<=T; t++) {
        int N, M; cin >> N >> M;

        vector<vector<int>> v(N+1);

        for(int i=0; i<M; i++) {
            int a, b; cin >> a >> b;

            v[a].push_back(b);
            v[b].push_back(a);
        }

        int x; cin >> x;

        vector<int> ans;
        for(int i=0; i<v[x].size(); i++) ans.push_back(v[x][i]);

        sort(ans.begin(), ans.end());

        ans.erase(unique(ans.begin(), ans.end()), ans.end());

        cout << "Data Set " << t << ":\n";
        for(int i=0; i<ans.size(); i++) cout << ans[i] << " ";
        cout << "\n\n";
    }
}
