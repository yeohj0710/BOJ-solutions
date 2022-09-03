#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    string str; cin >> str;

    int ans = 0;

    for(int i=0; i<str.length(); i++)
        for(int j=i; j<str.length(); j++) {
            if((j-i+1) % 2 != 0) continue;

            int a = 0, b = 0;

            for(int k=0; k<(j-i+1)/2; k++) {
                a += str[i+k] - '0';
                b += str[j-k] - '0';
            }

            if(a == b) ans = max(ans, j-i+1);
        }

    cout << ans << "\n";
}
