#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    string str; cin >> str;

    int ans = 0;

    for(int i=N-1; i>=0; i-=2) {
        if(str[i] == str[i-1]) continue;

        if(str[i] == 'H' && ans % 2 == 0) ans++;
        else if(str[i] == 'G' && ans % 2 == 1) ans++;
    }

    cout << ans << "\n";
}
