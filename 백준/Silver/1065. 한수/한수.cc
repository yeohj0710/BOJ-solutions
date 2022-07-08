#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    int ans = 0;

    for(int i=1; i<=N; i++) {
        if(i < 10) {
            ans++;
            continue;
        }

        string str = to_string(i);

        bool check = true;
        for(int i=1; i<str.length(); i++)
            if(str[i] - str[i-1] != str[1] - str[0]) check = false;

        if(check) ans++;
    }

    cout << ans << "\n";
}
