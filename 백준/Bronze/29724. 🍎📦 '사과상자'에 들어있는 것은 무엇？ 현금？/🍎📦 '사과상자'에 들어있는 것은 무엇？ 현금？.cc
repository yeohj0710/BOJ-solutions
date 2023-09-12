#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N = 0, weight = 0, value = 0;

    cin >> N;

    while(N--) {
        char ch; int a, b, c; cin >> ch >> a >> b >> c;

        if(ch == 'A') {
            weight += 1000 + (a / 12) * (b / 12) * (c / 12) * 500;
            value += (a / 12) * (b / 12) * (c / 12) * 4000;
        }
        else weight += 6000;
    }

    cout << weight << "\n" << value << "\n";
}
