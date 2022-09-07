#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    while(true) {
        double x; cin >> x;
        if(x == 0) break;

        int a, b;

        for(int i=1; ; i++) {
            double Min = INT_MAX;
            bool check = false;

            for(int j=i*3; j<=i*4; j++) {
                double dif = abs(((double)j/i) - M_PI);

                if(dif <= x && dif < Min) {
                    a = j, b = i;

                    Min = dif;
                    check = true;
                }
            }

            if(check) {
                cout << a << "/" << b << "\n";
                break;
            }
        }
    }
}
