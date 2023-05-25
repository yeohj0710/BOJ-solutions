#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N; cin >> N;

    int a = 1, b = N;

    for(int i=0; i<N; i++) {
        if(i % 2 == 0) {
            cout << a << " ";
            a++;
        } else {
            cout << b << " ";
            b--;
        }
    }
    cout << "\n";
}
