#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

struct Point { ll x, y; };

ll area(Point a, Point b, Point c) {
    return abs(a.x * (b.y - c.y) + b.x * (c.y - a.y) + c.x * (a.y - b.y));
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<Point> point(N);
    for(int i=0; i<N; i++) cin >> point[i].x >> point[i].y;

    ll ans = 0;
    for(int i=0; i<N; i++)
        for(int j=i+1; j<N; j++)
            for(int k=j+1; k<N; k++)
                ans = max(ans, area(point[i], point[j], point[k]));

    if(ans % 2 == 0) cout << ans/2;
    else cout << ans/2 << ".5";
}
