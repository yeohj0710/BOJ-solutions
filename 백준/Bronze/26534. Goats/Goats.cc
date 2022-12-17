#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    ios::sync_with_stdio(0), cin.tie(0);

    cout << fixed << setprecision(5);

    vector<int> v(6), u(6);

    for(int i=0; i<6; i++) cin >> v[i];
    for(int i=0; i<6; i++) cin >> u[i];

    int a = 0, b = 0;

    for(int i=0; i<6; i++)
        for(int j=0; j<6; j++) {
            if(v[i] > u[j]) a++;
            else if(v[i] < u[j]) b++;
        }

    cout << (double)a / (a + b) << "\n";
}
