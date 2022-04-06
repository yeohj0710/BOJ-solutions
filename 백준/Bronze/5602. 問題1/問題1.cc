#include <bits/stdc++.h>
using namespace std;

bool compare(pair<int, int> &a, pair<int, int> &b) {
    return (a.first > b.first) || (a.first == b.first && a.second < b.second);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    vector<pair<int, int>> cnt(M);
    for(int i=0; i<M; i++) cnt[i].second = i + 1;

    for(int i=0; i<N; i++)
        for(int j=0; j<M; j++) {
            int value; cin >> value;
            if(value == 1) cnt[j].first++;
        }

    sort(cnt.begin(), cnt.end(), compare);

    for(int i=0; i<M; i++) cout << cnt[i].second << " ";
}
