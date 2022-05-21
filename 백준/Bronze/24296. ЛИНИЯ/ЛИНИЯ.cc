#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    while(true) {
        if(N % 2 == 0) break;
        else N = (N + 1)/2;
    }

    cout << N << "\n";
}
