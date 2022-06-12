#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    for(int i=M; i<=100; i++)
        if((N - i*(i+1)/2) % i == 0) {
            int x = (N - i*(i+1)/2)/i;

            if(x + 1 < 0) continue;

            for(int j=1; j<=i; j++) cout << x + j << " ";
            cout << "\n";

            return 0;
        }

    cout << -1 << "\n";
}
