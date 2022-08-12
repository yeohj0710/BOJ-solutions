#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    int x = N / 6;

    if(N % 6 != 0) x += 7 - (N % 6);

    cout << x << " " << N * 6 << "\n";
}
