#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, K, D; cin >> N >> K >> D;

    vector<pair<int, string>> v;
    for(int i=0; i<N; i++) {
        string str; cin >> str;
        int x; cin >> x;

        v.push_back({x, str});
    }

    sort(v.begin(), v.end());

    int sum = 0;
    vector<string> ans;

    for(int i=N-1; i>=N-D; i--) {
        sum += v[i].first;
        ans.push_back(v[i].second);

        if(sum >= K) {
            cout << N-i << "\n";
            for(int j=0; j<ans.size(); j++) cout << ans[j] << ", YOU ARE FIRED!\n";
            return 0;
        }
    }

    cout << "impossible\n";
}
