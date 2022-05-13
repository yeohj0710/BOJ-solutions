#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T = 3;

    while(T--) {
        int N; cin >> N;

        __int128 sum = 0;
        while(N--) {
            int x; cin >> x;

            sum += x;
        }

        if(sum == 0) cout << "0\n";
        else if(sum > 0) cout << "+\n";
        else if(sum < 0) cout << "-\n";
    }
}
