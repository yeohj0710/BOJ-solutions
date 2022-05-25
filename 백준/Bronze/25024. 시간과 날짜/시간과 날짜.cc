#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    while(T--) {
        int a, b; cin >> a >> b;

        bool check1 = true, check2 = true;

        if(a >= 24 || b >= 60) check1 = false;

        if(a == 0 || b == 0) check2 = false;

        if(a > 12) check2 = false;

        if((a == 1 || a == 3 || a == 5 || a == 7 || a == 8 || a == 10 || a == 12)
           && (b > 31)) check2 = false;

        if((a == 4 || a == 6 || a == 9 || a == 11) && b > 30) check2 = false;

        if(a == 2 && b > 29) check2 = false;

        if(check1) cout << "Yes ";
        else cout << "No ";

        if(check2) cout << "Yes\n";
        else cout << "No\n";
    }
}
