#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    if((N % 4 == 0 && N % 100 != 0) || N % 400 == 0) cout << 1 << "\n";
    else cout << 0 << "\n";
}
