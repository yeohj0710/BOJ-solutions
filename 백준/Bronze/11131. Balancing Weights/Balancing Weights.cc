#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    while(T--) {
        int N; cin >> N;

        int sum = 0;
        for(int i=0; i<N; i++) {
            int val; cin >> val;

            sum += val;
        }

        if(sum == 0) cout << "Equilibrium\n";
        else if(sum > 0) cout << "Right\n";
        else if(sum < 0) cout << "Left\n";
    }
}
