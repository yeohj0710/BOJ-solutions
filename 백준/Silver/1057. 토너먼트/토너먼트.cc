#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, A, B; cin >> N >> A >> B;

    int round = 1;

    while(N > 0) {
        if((A + 1)/2 == (B + 1)/2) {
            cout << round << "\n";
            return 0;
        }

        A = (A + 1)/2;
        B = (B + 1)/2;

        N /= 2;
        round++;
    }

    cout << "-1\n";
}
