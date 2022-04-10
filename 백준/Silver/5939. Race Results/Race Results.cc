#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<pair<pair<int, int>, int>> time(N);

    for(int i=0; i<N; i++)
        cin >> time[i].first.first >> time[i].first.second >> time[i].second;

    sort(time.begin(), time.end());

    for(int i=0; i<N; i++)
        cout << time[i].first.first << " " << time[i].first.second << " " << time[i].second << "\n";
}
