#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    ios::sync_with_stdio(0), cin.tie(0);

    int N; cin >> N;

    for(int i=1; i<=N/2; i++) {
        for(int j=1; j<=i*2-1; j++) cout << "*";
        for(int j=1; j<=(N-i*2+1)*2; j++) cout << " ";
        for(int j=1; j<=i*2-1; j++) cout << "*";

        cout << "\n";
    }

    for(int i=1; i<=N*2; i++) cout << "*";
    cout << "\n";

    for(int i=N/2; i>=1; i--) {
        for(int j=1; j<=i*2-1; j++) cout << "*";
        for(int j=1; j<=(N-i*2+1)*2; j++) cout << " ";
        for(int j=1; j<=i*2-1; j++) cout << "*";

        cout << "\n";
    }
}
