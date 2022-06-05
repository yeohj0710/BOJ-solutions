#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    vector<int> v(N), u(M);
    for(int i=0; i<N; i++) cin >> v[i];
    for(int i=0; i<M; i++) cin >> u[i];

    sort(v.begin(), v.end());
    sort(u.begin(), u.end());

    vector<int> ans;

    int i = 0, j = 0;
    while(i < N && j < M) {
        if(v[i] < u[j]) {
            ans.push_back(v[i]);
            i++;
        }
        else if(v[i] > u[j]) j++;
        else if(v[i] == u[j]) i++, j++;
    }
    while(i < N) {
        ans.push_back(v[i]);
        i++;
    }

    cout << ans.size() << "\n";
    for(int i=0; i<ans.size(); i++) cout << ans[i] << " ";
    if(ans.size() != 0) cout << "\n";
}
