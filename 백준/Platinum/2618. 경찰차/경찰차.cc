#include <bits/stdc++.h>
#define MAX 1001
using namespace std;

struct Point { int x, y; };
Point point[MAX];

int N, W;
int dp[MAX][MAX]; // dp[i][j] : distance to go since "car 1 last visited point i" and "car 2 last visited point j"

int dist(Point a, Point b) {
    return abs(a.x - b.x) + abs(a.y - b.y);
}

int calc_dp(int i, int j) {
    if(i == W || j == W) return 0;
    if(dp[i][j] != -1) return dp[i][j];

    int dist1, dist2, next = max(i, j) + 1;

    if(i == 0) dist1 = dist({1, 1}, point[next]);
    else dist1 = dist(point[i], point[next]);

    if(j == 0) dist2 = dist({N, N}, point[next]);
    else dist2 = dist(point[j], point[next]);

    return dp[i][j] = min(calc_dp(next, j) + dist1, calc_dp(i, next) + dist2);
}

void car_num(int i, int j) {
    if(i == W || j == W) return;

    int dist1, dist2, next = max(i, j) + 1;

    if(i == 0) dist1 = dist({1, 1}, point[next]);
    else dist1 = dist(point[i], point[next]);

    if(j == 0) dist2 = dist({N, N}, point[next]);
    else dist2 = dist(point[j], point[next]);

    if(dp[next][j] + dist1 < dp[i][next] + dist2) {
        cout << "1\n";
        car_num(next, j);
    }
    else {
        cout << "2\n";
        car_num(i, next);
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    cin >> N >> W;

    for(int i=1; i<=W; i++)
        cin >> point[i].x >> point[i].y;

    memset(dp, -1, sizeof(dp));

    cout << calc_dp(0, 0) << "\n";

    car_num(0, 0);
}
