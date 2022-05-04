#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; double w, h; cin >> N >> w >> h;

    double L = sqrt(pow(w, 2) + pow(h, 2));

    for(int i=0; i<N; i++) {
        double val; cin >> val;

        if(val <= L) cout << "YES\n";
        else cout << "NO\n";
    }
}
