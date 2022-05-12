#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    for(int t=1; t<=T; t++) {
        int trash, N; cin >> trash >> N;

        cout << t << " " << (N + 1) * (N + 2) / 2 - 1 << "\n";
    }
}
