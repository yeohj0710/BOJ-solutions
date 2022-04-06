#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;
    vector<pair<int, int>> Line;
    for(int i=0; i<N; i++) {
        int H, O; cin >> H >> O;
        if(H > O) swap(H, O);
        Line.push_back({H, O});
    }

    int D; cin >> D;
    vector<pair<int, int>> Point;
    for(int i=0; i<N; i++) {
        if(Line[i].first + D < Line[i].second) continue;
        Point.push_back({Line[i].first, 1});
        Point.push_back({Line[i].second - D, -1});
    }
    sort(Point.begin(), Point.end());

    int Cnt = 0, Ans = 0;
    for(int i=0; i<Point.size(); i++) {
        Cnt -= Point[i].second;
        if(Cnt > Ans) Ans = Cnt;
    }
    cout << Ans;
}
