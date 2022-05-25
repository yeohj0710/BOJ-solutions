#include <bits/stdc++.h>
#define int long long
using namespace std;

struct S { int a, b, c; };

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    for(int t=1; t<=T; t++) {
        int N; cin >> N;

        vector<S> v(N);
        for(int i=0; i<N; i++) cin >> v[i].a >> v[i].b >> v[i].c;

        int Max = -1;
        vector<pair<int, int>> ans;

        for(int i=0; i<N; i++)
            for(int j=i+1; j<N; j++) {
                int val = pow(v[i].a - v[j].a, 2) + pow(v[i].b - v[j].b, 2) + pow(v[i].c - v[j].c, 2);

                if(val > Max) {
                    Max = val;
                    ans.clear();
                    ans.push_back({i+1, j+1});
                }
                else if(val == Max) ans.push_back({i+1, j+1});
            }

        sort(ans.begin(), ans.end());

        cout << "Data Set " << t << ":\n";

        for(int i=0; i<ans.size(); i++) cout << ans[i].first << " " << ans[i].second << "\n";
    }
}
