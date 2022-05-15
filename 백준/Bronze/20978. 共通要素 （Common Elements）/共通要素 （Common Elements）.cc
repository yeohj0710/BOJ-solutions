#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    vector<int> u(N), v(M);
    for(int i=0; i<N; i++) cin >> u[i];
    for(int i=0; i<M; i++) cin >> v[i];

    vector<int> ans;
    for(int i=0; i<N; i++)
        for(int j=0; j<M; j++)
            if(u[i] == v[j]) ans.push_back(u[i]);

    if(ans.size() == 0) return 0;

    sort(ans.begin(), ans.end());

    for(int i=0; i<ans.size()-1; i++)
        if(ans[i] != ans[i+1]) cout << ans[i] << "\n";
    cout << ans[ans.size()-1] << "\n";
}
