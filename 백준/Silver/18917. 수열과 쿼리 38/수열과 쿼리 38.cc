#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    long long sum = 0, Xor = 0;

    int T; cin >> T;

    while(T--) {
        int Q; cin >> Q;

        if(Q == 1) {
            int value; cin >> value;
            sum += value;
            Xor = Xor ^ value;
        }
        else if(Q == 2) {
            int value; cin >> value;
            sum -= value;
            Xor = Xor ^ value;
        }
        else if(Q == 3) cout << sum << "\n";
        else if(Q == 4) cout << Xor << "\n";
    }
}
