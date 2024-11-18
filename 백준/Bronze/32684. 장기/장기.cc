#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    vector<int> v(12);
    for(int i=0; i<12; i++) cin >> v[i];

    double a = v[0] * 13 + v[1] * 7 + v[2] * 5 + v[3] * 3 + v[4] * 3 + v[5] * 2;
    double b = v[6] * 13 + v[7] * 7 + v[8] * 5 + v[9] * 3 + v[10] * 3 + v[11] * 2 + 1.5;

    if(a > b) cout << "cocjr0208\n";
    else cout << "ekwoo\n";
}
