#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    int v[7] = {0, 1, 0, 1, 1, 1, 1};

    if(v[N % 7] == 1) cout << "SK\n";
    else cout << "CY\n";
}
