#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    while(T--) {
        int N; cin >> N;

        if(abs(N) % 2 == 1) cout << N << " is odd\n";
        else cout << N << " is even\n";
    }
}
