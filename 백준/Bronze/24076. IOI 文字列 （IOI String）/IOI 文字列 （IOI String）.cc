#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    string str; cin >> str;

    int ans = 0;

    for(int i=0; i<N; i++) {
        if(i % 2 == 0 && str[i] != 'I') ans++;
        else if(i % 2 == 1 && str[i] != 'O') ans++;
    }

    cout << ans << "\n";
}
