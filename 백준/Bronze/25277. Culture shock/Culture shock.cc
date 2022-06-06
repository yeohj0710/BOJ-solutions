#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    int ans = 0;
    while(N--) {
        string str; cin >> str;

        if(str == "he" || str == "him" || str == "she" || str == "her") ans++;
    }

    cout << ans << "\n";
}
