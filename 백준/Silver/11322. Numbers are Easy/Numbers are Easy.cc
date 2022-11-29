#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    while(T--) {
        int N; cin >> N;

        for(int i=1; ; i++) {
            string str = "";
            int tmp = i;

            while(tmp > 0) {
                str = char('0' + tmp % 2) + str;
                tmp /= 2;
            }

            int M = stoll(str);

            if(M % N == 0) {
                cout << M << "\n";
                break;
            }
        }
    }
}
