#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    for(int i=1; i<N; i++) {
        for(int j=1; j<=N-i; j++) cout << " ";
        cout << "*";

        if(i == 1) {
            cout << "\n";
            continue;
        }

        for(int j=1; j<=i*2-3; j++) cout << " ";

        cout << "*\n";
    }

    for(int i=1; i<=N*2-1; i++) cout << "*";
    cout << "\n";
}
