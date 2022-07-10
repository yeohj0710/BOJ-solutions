#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    while(T--) {
        string str; cin >> str;
        double a, b, c; cin >> a >> b >> c;

        bool check = true;
        double sum = a + b + c;
        if(sum < 55) check = false;
        if(a < 35*0.3 || b < 25*0.3 || c < 40*0.3) check = false;

        cout << str << " " << sum << " ";

        if(check) cout << "PASS\n";
        else cout << "FAIL\n";
    }
}
