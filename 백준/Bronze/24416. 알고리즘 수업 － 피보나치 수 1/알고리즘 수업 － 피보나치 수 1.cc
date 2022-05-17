#include <bits/stdc++.h>
#define int long long
using namespace std;

int cnt = 0;

int f(int N) {
    if(N == 1 || N == 2) {
        cnt++;
        return 1;
    }
    else return f(N-1) + f(N-2);
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    f(N);

    cout << cnt << " " << N-2 << "\n";
}
