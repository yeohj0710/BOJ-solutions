#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    int a = N / 300;
    N -= (N / 300) * 300;

    int b = N / 60;
    N -= (N / 60) * 60;

    int c = N / 10;
    N -= (N / 10) * 10;

    if(N == 0) cout << a << " " << b << " " << c << "\n";
    else cout << -1 << "\n";
}
