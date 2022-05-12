#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, K; cin >> N >> K;

    vector<int> ans;

    for(int i=1; i<=N; i++)
        if(i % 10 != K % 10 && i % 10 != (K * 2) % 10) ans.push_back(i);

    cout << ans.size() << "\n";
    for(int i=0; i<ans.size(); i++) cout << ans[i] << " ";
}
