#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    vector<int> v(M+2);
    v[0] = 0, v[M+1] = N;
    for(int i=1; i<=M; i++) cin >> v[i];

    vector<int> ans;
    for(int i=0; i<M+2; i++)
        for(int j=i+1; j<M+2; j++) ans.push_back(v[j] - v[i]);

    sort(ans.begin(), ans.end());

    cout << ans[0] << " ";
    for(int i=1; i<ans.size(); i++)
        if(ans[i] != ans[i-1]) cout << ans[i] << " ";
}

