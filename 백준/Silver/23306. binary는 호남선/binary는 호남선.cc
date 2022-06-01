#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);

    int N; cin >> N;

    cout << "? " << 1 << "\n"; fflush(stdout);
    int a; cin >> a;

    cout << "? " << N << "\n"; fflush(stdout);
    int b; cin >> b;

    if(a == 1 && b == 0) {
        cout << "! " << -1 << "\n"; fflush(stdout);
    }
    else if(a == 0 && b == 1) {
        cout << "! " << 1 << "\n"; fflush(stdout);
    }
    else {
        cout << "! " << 0 << "\n"; fflush(stdout);
    }
}
