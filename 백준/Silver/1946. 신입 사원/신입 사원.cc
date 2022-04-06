#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    while(T--) {
        int N; cin >> N;

        vector<pair<int, int>> Rank(N);
        for(int i=0; i<N; i++) cin >> Rank[i].first >> Rank[i].second;
        sort(Rank.begin(), Rank.end());

        int cnt = 1, lowRank = Rank[0].second;
        for(int i=1; i<N; i++)
            if(Rank[i].second < lowRank) {
                cnt++;
                lowRank = Rank[i].second;
            }

        cout << cnt << "\n";
    }
}
