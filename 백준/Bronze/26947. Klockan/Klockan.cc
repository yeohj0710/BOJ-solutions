#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N; cin >> N;

    for(int i=0; i<12; i++)
        for(int j=0; j<60; j++) {
            int angle = 60 * j - (300 * i + 5 * j);

            if(angle < 0) angle += 3600;

            if(angle == N) {
                string x = to_string(i), y = to_string(j);

                while(x.length() < 2) x = '0' + x;
                while(y.length() < 2) y = '0' + y;

                cout << x << ":" << y << "\n";
            }
        }
}
