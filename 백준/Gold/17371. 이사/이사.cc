#include <bits/stdc++.h>
#define int long long
using namespace std;

struct P { double x, y; };

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<P> v(N);
    for(int i=0; i<N; i++) cin >> v[i].x >> v[i].y;

    double sum = INT_MAX, ans;
    for(int i=0; i<N; i++) {
        double Min = INT_MAX, Max = 0;
        for(int j=0; j<N; j++) {
            Min = min(Min, sqrt(pow(v[i].x - v[j].x, 2) + pow(v[i].y - v[j].y, 2)));
            Max = max(Max, sqrt(pow(v[i].x - v[j].x, 2) + pow(v[i].y - v[j].y, 2)));
        }

        if((Min + Max)/2 < sum) {
            sum = (Min + Max)/2;
            ans = i;
        }
    }

    cout << v[ans].x << " " << v[ans].y << "\n";
}
