#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<int> v(N), ans;

    for(int i=0; i<N; i++) cin >> v[i];

    int cur = v[0];
    for(int i=1; i<N; i++)
        if(v[i] % cur == 0) {
            ans.push_back(v[i]);
            if(i < N-1) cur = v[i+1];

            i++;
        }

    for(int i=0; i<ans.size(); i++) cout << ans[i] << "\n";
}
