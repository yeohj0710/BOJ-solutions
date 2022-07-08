#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    for(int i=1; i<N; i++) {
        for(int j=1; j<=i; j++) cout << "*";
        for(int j=1; j<=(N-i)*2; j++) cout << " ";
        for(int j=1; j<=i; j++) cout << "*";

        cout << "\n";
    }

    for(int i=1; i<=N*2; i++) cout << "*";
    cout << "\n";

    for(int i=N-1; i>=1; i--) {
        for(int j=1; j<=i; j++) cout << "*";
        for(int j=1; j<=(N-i)*2; j++) cout << " ";
        for(int j=1; j<=i; j++) cout << "*";

        cout << "\n";
    }
}
