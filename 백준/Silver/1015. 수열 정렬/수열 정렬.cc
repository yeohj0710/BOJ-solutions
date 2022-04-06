#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<pair<int, int>> Pair;
    for(int i=0; i<N; i++) {
        int value; cin >> value;
        Pair.push_back({value, i});
    }

    sort(Pair.begin(), Pair.end());

    vector<int> ans(N);
    for(int i=0; i<N; i++) ans[Pair[i].second] = i;
    for(int i=0; i<N; i++) cout << ans[i] << " ";
}
