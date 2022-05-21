#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M, x, y; cin >> N >> M >> x >> y;

    cout << ((N-1)/(x+1) + 1) * ((M-1)/(y+1) + 1) << "\n";
}
