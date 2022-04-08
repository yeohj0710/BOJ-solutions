#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<pair<int, int>> cow(N);
    for(int i=0; i<N; i++) cin >> cow[i].first >> cow[i].second;

    sort(cow.begin(), cow.end());

    int time = cow[0].first + cow[0].second;
    for(int i=1; i<cow.size(); i++) {
        if(cow[i].first > time) time = cow[i].first + cow[i].second;
        else time += cow[i].second;
    }

    cout << time;
}
