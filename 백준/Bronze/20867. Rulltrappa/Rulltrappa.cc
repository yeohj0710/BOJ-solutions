#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    double M, S, G, A, B, L, R;
    cin >> M >> S >> G >> A >> B >> L >> R;

    if(L/A + M/G < R/B + M/S) cout << "friskus";
    else cout << "latmask";
}
