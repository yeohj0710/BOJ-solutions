#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N; cin >> N;

    while(true) {
        if(N == 0) break;

        int x = 1;

        while(true) {
            if((x + 1) * (x + 2) / 2 > N) {
                cout << x << "\n";

                N -= x * (x + 1) / 2;

                break;
            }

            x++;
        }
    }
}

