#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    while(true) {
        int N; cin >> N;
        if(N == -1) break;

        string str = "";

        for(int i=0; i<32; i++) {
            if(N % 2 == 1) str = "1" + str;
            else str = "0" + str;

            N /= 2;
        }

        reverse(str.begin(), str.end());

        int ans = 0;

        for(int i=0; i<32; i++)
            if(str[i] == '1') ans += pow(2, 31-i);

        cout << ans << "\n";
    }
}
