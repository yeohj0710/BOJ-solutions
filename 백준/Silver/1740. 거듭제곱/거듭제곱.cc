#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    string str = "";
    while(N > 0) {
        if(N % 2 == 1) str = '1' + str;
        else str = '0' + str;

        N /= 2;
    }

    int ans = 0;
    for(int i=0; i<str.length(); i++) {
        ans *= 3;
        if(str[i] == '1') ans += 1;
    }

    cout << ans << "\n";
}
