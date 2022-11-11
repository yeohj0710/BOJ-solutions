#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    while(T--) {
        int N; cin >> N;

        string str = "";

        while(N > 0) {
            str = char('0' + N % 2) + str;

            N /= 2;
        }

        int ans = 0;

        for(int i=0; i<str.length(); i++)
            if(str[i] == '1') {
                int tmp = 1;

                for(int j=0; j<str.length()-1-i; j++) tmp *= 3;

                ans += tmp;
            }

        cout << ans << "\n";
    }
}
