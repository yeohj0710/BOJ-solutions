#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    cout << N << ":\n";

    for(int i=2; i<=N; i++)
        for(int j=1; j<=i && i+j<=N; j++) {
            if(abs(i - j) > 1) continue;

            int sum = 0;

            while(true) {
                if(sum + i <= N) sum += i;
                else break;

                if(sum + j <= N) sum += j;
                else break;
            }

            if(sum == N) cout << i << "," << j << "\n";
        }
}
