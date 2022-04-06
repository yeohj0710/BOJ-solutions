#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    vector<pair<int, int>> score;
    for(int i=1; i<=8; i++) {
        int value; cin >> value;
        score.push_back({value, i});
    }
    sort(score.begin(), score.end(), greater<pair<int, int>>());

    int sum = 0;
    for(int i=0; i<5; i++) sum += score[i].first;
    cout << sum << "\n";

    vector<int> ans;
    for(int i=0; i<5; i++) ans.push_back(score[i].second);
    sort(ans.begin(), ans.end());
    for(int i=0; i<5; i++) cout << ans[i] << " ";
}
