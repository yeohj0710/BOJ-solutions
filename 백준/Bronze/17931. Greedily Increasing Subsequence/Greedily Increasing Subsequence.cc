#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<int> v(N);
    for(int i=0; i<N; i++) cin >> v[i];

    vector<int> ans;
    ans.push_back(v[0]);

    for(int i=1; i<N; i++)
        if(v[i] > ans[ans.size()-1]) ans.push_back(v[i]);

    cout << ans.size() << "\n";
    for(int i=0; i<ans.size(); i++) cout << ans[i] << " ";
}
