#include <bits/stdc++.h>
#define int long long
using namespace std;

struct Point { double x, y; };

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<Point> v(N);
    for(int i=0; i<N; i++) cin >> v[i].x >> v[i].y;

    vector<pair<double, double>> slope;
    for(int i=0; i<N; i++)
        for(int j=i+1; j<N; j++) {
            bool check = true;
            for(int k=0; k<slope.size(); k++)
                if(slope[k].first * (v[i].y - v[j].y) == slope[k].second * (v[i].x - v[j].x)) check = false;

            if(check) slope.push_back({v[i].x - v[j].x, v[i].y - v[j].y});
        }

    cout << slope.size() << "\n";
}
