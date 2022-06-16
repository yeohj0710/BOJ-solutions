#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    string str = to_string(N);
    for(int i=0; i<str.length(); i++)
        if(str[i] >= '4' && str[i] <= '9') str[i]--;

    int ans = 0;
    for(int i=0; i<str.length(); i++) ans = ans*9 + (str[i] - '0');

    cout << ans << "\n";
}
