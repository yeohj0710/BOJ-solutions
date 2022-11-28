#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    while(T--) {
        int N; cin >> N;

        int sum = 0;

        for(int i=1; i*i<=N; i++) {
            if(N % i == 0) {
                sum += i;

                if(i*i < N) sum += N/i;
            }
        }

        sum -= N;

        if(sum > N) cout << "abundant\n";
        else if(sum == N) cout << "perfect\n";
        else if(sum < N) cout << "deficient\n";
    }
}
