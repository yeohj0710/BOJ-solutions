#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    if(N == 0) cout << 1 << "\n";
    else if(N == 1) cout << 0 << "\n";
    else {
        if(N % 2 == 1) {
            cout << 4;
            N--;
        }

        for(int i=0; i<N; i+=2) cout << 8;
        cout << "\n";
    }
}
