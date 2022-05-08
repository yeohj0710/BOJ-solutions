#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    while(true) {
        int N; cin >> N;
        if(N == 0) break;

        if(N <= 1e6) cout << int(N) << "\n";
        else if(N <= 5e6) cout << int(N * 0.9) << "\n";
        else cout << int(N * 0.8) << "\n";
    }
}
