#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<pair<int, pair<int, int>>> score(N);

    for(int i=0; i<N; i++)
        cin >> score[i].second.first >> score[i].second.second >> score[i].first;

    sort(score.begin(), score.end(), greater<pair<int, pair<int, int>>>());

    int check[101] = {}, cnt = 0;
    for(int i=0; i<N; i++) {
        int country = score[i].second.first;
        if(check[country] == 2) continue;

        cout << country << " " << score[i].second.second << "\n";
        check[country]++, cnt++;

        if(cnt == 3) break;
    }
}
