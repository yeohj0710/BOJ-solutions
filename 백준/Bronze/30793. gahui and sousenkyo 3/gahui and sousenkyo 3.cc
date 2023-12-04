#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    vector<double> v = {0.2, 0.4, 0.6};
    vector<string> u = {"weak", "normal", "strong"};

    double a, b; cin >> a >> b;

    for(int i=0; i<v.size(); i++)
        if(a / b < v[i]) {
            cout << u[i] << "\n";
            return 0;
        }

    cout << "very strong\n";
}
