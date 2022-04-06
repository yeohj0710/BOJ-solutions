#include <bits/stdc++.h>
using namespace std;

struct Point { int x, y; };

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;
    vector<Point> point(N);

    for(int i=0; i<N; i++)
        cin >> point[i].x >> point[i].y;

    int ans, minDist = INT_MAX;
    for(int i=0; i<N; i++) {
        double maxDist = 0;
        for(int j=0; j<N; j++) {
            double dist = sqrt(pow(point[i].x - point[j].x, 2) + pow(point[i].y - point[j].y, 2));
            maxDist = max(maxDist, dist);
        }
        if(maxDist < minDist) {
            minDist = maxDist;
            ans = i;
        }
    }
    cout << point[ans].x << " " << point[ans].y << "\n";
}
