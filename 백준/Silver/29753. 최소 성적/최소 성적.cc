#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    double N, M; cin >> N >> M;

    vector<string> v = {"A+", "A0", "B+", "B0", "C+", "C0", "D+", "D0", "F"};
    vector<double> u = {4.5, 4.0, 3.5, 3.0, 2.5, 2.0, 1.5, 1.0, 0};

    double up = 0, down = 0;

    for(int i=0; i<N-1; i++) {
        int x; string str; cin >> x >> str;

        down += x;

        for(int j=0; j<v.size(); j++)
            if(v[j] == str) up += u[j] * x;
    }

    int add; cin >> add;

    for(int i=v.size()-1; i>=0; i--) {
        if(floor(((up + add * u[i]) / (down + add) + 0.0001) * 100) / 100 > M) {
            cout << v[i] << "\n";
            return 0;
        }
    }

    cout << "impossible\n";
}
