#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    N++;

    int cnt = 0;

    for(int i=1; i<=sqrt(N); i++) {
        if(N % i == 0) {
            if(N / i == i) cnt++;
            else cnt += 2;
        }
    }

    cout << cnt << "\n";
}
