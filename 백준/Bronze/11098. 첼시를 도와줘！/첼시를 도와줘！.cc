#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    while(T--) {
        int N; cin >> N;

        vector<pair<int, string>> player(N);
        for(int i=0; i<N; i++) cin >> player[i].first >> player[i].second;

        sort(player.begin(), player.end(), greater<pair<int, string>>());

        cout << player[0].second << "\n";
    }
}
