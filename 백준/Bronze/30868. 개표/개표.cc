#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int T; cin >> T;

    while(T--) {
        int N; cin >> N;

        for(int i=0; i<N/5; i++) cout << "++++ ";
        for(int i=0; i<N % 5; i++) cout << "|";

        cout << "\n";
    }
}
