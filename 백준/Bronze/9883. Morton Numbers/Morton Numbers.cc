#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int x, y; cin >> x >> y;

    string a = "", b = "";

    while(x > 0) {
        if(x % 2 == 1) a = "1" + a;
        else a = "0" + a;

        x /= 2;
    }

    while(y > 0) {
        if(y % 2 == 1) b = "1" + b;
        else b = "0" + b;

        y /= 2;
    }

    int c = a.length(), d = b.length();
    if(c < d) for(int i=0; i<d-c; i++) a = "0" + a;
    else if(c > d) for(int i=0; i<c-d; i++) b = "0" + b;

    int ans = 0, temp = 1;

    for(int i=a.length()-1; i>=0; i--) {
        if(b[i] == '1') ans += temp;
        temp *= 2;
        if(a[i] == '1') ans += temp;
        temp *= 2;
    }

    cout << ans << "\n";
}

