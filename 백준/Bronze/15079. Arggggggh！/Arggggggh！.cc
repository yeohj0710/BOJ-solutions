#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    double x, y; cin >> x >> y;

    for(int i=0; i<N-1; i++) {
        string str; cin >> str;

        double r; cin >> r;

        double s = r/sqrt(2);

        if(str == "N") y += r;
        else if(str == "NE") x += s, y += s;
        else if(str == "E") x += r;
        else if(str == "SE") x += s, y -= s;
        else if(str == "S") y -= r;
        else if(str == "SW") x -= s, y -= s;
        else if(str == "W") x -= r;
        else if(str == "NW") x -= s, y += s;
    }

    cout << fixed;
    cout.precision(7);

    cout << x << " " << y << "\n";
}
