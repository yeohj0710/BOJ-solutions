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
        for(int i=3; ; i+=3) {
            if(N <= sum + i) {
                if(N <= sum + i/3) {
                    if(i/3 == 1) cout << i/3 << " dolphin\n";
                    else cout << i/3 << " dolphins\n";
                }
                else if(N <= sum + i/3 * 2) {
                    if(i/3 == 1) cout << i/3 << " jump\n";
                    else cout << i/3 << " jumps\n";
                }
                else {
                    cout << "splash\n";
                }
                break;
            }
            sum += i;
        }
    }
}
