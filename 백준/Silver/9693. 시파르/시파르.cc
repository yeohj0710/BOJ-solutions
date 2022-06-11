#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    for(int t=1; ; t++) {
        int N; cin >> N;
        if(N == 0) break;

        int a = 0, b = 0;
        for(int i=1; i<=N; i++) {
            int temp = i;

            while(temp % 2 == 0) {
                a++;
                temp /= 2;
            }

            while(temp % 5 == 0) {
                b++;
                temp /= 5;
            }
        }

        cout << "Case #" << t << ": " << min(a, b) << "\n";
    }
}
