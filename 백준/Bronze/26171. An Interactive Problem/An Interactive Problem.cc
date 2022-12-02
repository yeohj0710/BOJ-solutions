#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N;

    for(int i=2; i<=101; i++) {
        cout << "? " << i << " " << i << endl;

        string str; cin >> str;

        if(str == "ArrayIndexOutOfBoundsException") {
            N = i-1;
            break;
        }
    }

    int ans = INT_MIN;

    for(int i=1; i<=N; i++)
        for(int j=1; j<=N; j++) {
            cout << "? " << i << " " << j << endl;

            int val; cin >> val;

            ans = max(ans, val);
        }

    cout << "! " << ans << endl;
}
