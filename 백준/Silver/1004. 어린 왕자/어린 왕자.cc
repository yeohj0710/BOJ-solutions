#include <bits/stdc++.h>
using namespace std;

double dist(double x1, double y1, double x2, double y2) {
    return sqrt(pow(abs(x1 - x2), 2) + pow(abs(y1 - y2), 2));
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    while(T--) {
        double x1, y1, x2, y2; cin >> x1 >> y1 >> x2 >> y2;

        int N; cin >> N;

        int cnt = 0;
        while(N--) {
            int x, y, r; cin >> x >> y >> r;

            bool in1 = dist(x1, y1, x, y) < r;
            bool in2 = dist(x2, y2, x, y) < r;

            if(in1 && in2) continue;
            else if(in1 && !in2) cnt++;
            else if(!in1 && in2) cnt++;
            else continue;
        }

        cout << cnt << "\n";
    }
}
