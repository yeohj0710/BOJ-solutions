#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    double a = 0, b = 0;

    while(N--) {
        string str; cin >> str;
        double x; cin >> x;
        string g; cin >> g;

        b += x;

        if(g == "A+") a += 4.3 * x;
        else if(g == "A0") a += 4.0 * x;
        else if(g == "A-") a += 3.7 * x;
        else if(g == "B+") a += 3.3 * x;
        else if(g == "B0") a += 3.0 * x;
        else if(g == "B-") a += 2.7 * x;
        else if(g == "C+") a += 2.3 * x;
        else if(g == "C0") a += 2.0 * x;
        else if(g == "C-") a += 1.7 * x;
        else if(g == "D+") a += 1.3 * x;
        else if(g == "D0") a += 1.0 * x;
        else if(g == "D-") a += 0.7 * x;
        else if(g == "F") a += 0.0 * x;
    }

    printf("%.2lf\n", a/b + 0.000000001);
}
