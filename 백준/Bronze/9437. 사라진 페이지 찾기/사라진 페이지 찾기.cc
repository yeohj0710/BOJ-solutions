#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    while(true) {
        int N; cin >> N;
        if(N == 0) break;

        int P; cin >> P;

        for(int i=1; i<=N/2; i+=2) {
            if(P == i) cout << i+1 << " " << N-i << " " << N-i+1 << "\n";
            else if(P == i+1) cout << i << " " << N-i << " " << N-i+1 << "\n";
            else if(P == N-i) cout << i << " " << i+1 << " " << N-i+1 << "\n";
            else if(P == N-i+1) cout << i << " " << i+1 << " " << N-i << "\n";
        }
    }
}
