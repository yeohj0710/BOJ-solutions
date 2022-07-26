#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    string str; cin >> str;

    int ans = 0;

    if(str[0] == 'W') ans++;
    if(str[N-1] == 'E') ans++;

    for(int i=1; i<N; i++)
        if(str[i-1] == 'E' && str[i] == 'W') ans++;

    cout << ans << "\n";
}
