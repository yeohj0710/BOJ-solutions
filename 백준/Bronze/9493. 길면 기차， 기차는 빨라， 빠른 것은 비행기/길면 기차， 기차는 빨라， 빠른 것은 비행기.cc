#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    while(true) {
        double a, b, c; cin >> a >> b >> c;
        if(a == 0 && b == 0 && c == 0) break;

        double x = a / b * 3600;
        double y = a / c * 3600;

        int val = round(abs(x - y));

        int h = val / 3600;
        int m = (val % 3600) / 60;
        int s = val % 60;

        string mm = to_string(m);
        while(mm.length() < 2) mm = '0' + mm;

        string ss = to_string(s);
        while(ss.length() < 2) ss = '0' + ss;

        cout << h << ":" << mm << ":" << ss << "\n";
    }
}
