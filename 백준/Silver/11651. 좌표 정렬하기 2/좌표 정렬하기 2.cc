#include <bits/stdc++.h>
using namespace std;

vector<pair<int, int>> point;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;
    for(int i=0; i<N; i++) {
        int x, y; cin >> x >> y;
        point.push_back({y, x});
    }
    sort(point.begin(), point.end());

    for(int i=0; i<N; i++)
        cout << point[i].second << " " << point[i].first << "\n";
}
