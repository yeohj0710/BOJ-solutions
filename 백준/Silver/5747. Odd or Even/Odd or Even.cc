#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    while(true) {
        int N; cin >> N;
        if(N == 0) break;

        int a = 0, b = 0, c = 0, d = 0;

        for(int i=0; i<N; i++) {
            int x; cin >> x;

            if(x % 2 == 0) a++;
            else b++;
        }

        for(int i=0; i<N; i++) {
            int x; cin >> x;

            if(x % 2 == 0) c++;
            else d++;
        }

        if(a + c > N) cout << a + c - N << "\n";
        else if(b + d > N) cout << b + d - N << "\n";
        else cout << 0 << "\n";
    }
}
