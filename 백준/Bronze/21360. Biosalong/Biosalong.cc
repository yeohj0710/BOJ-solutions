#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    string str; cin >> str;

    int prev;

    for(int i=0; i<str.length(); i++)
        if(str[i] == '.') {
            prev = i;
            break;
        }

    int ans = INT_MAX;
    for(int i=prev+1; i<str.length(); i++)
        if(str[i] == '.') {
            ans = min(ans, i - prev - 1);
            prev = i;
        }

    cout << ans << "\n";
}
