#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;
    vector<pair<int, int>> card;
    while(M--) {
        int x, y; cin >> x >> y;
        if(x < N) card.push_back({x, y});
    }
    sort(card.begin(), card.end());

    int sum = 0;
    for(int i=1; i<card.size(); i++) sum += N - card[i].first;
    cout << sum;
}
