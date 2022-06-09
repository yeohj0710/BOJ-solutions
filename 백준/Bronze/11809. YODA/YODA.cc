#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    string a, b; cin >> a >> b;

    while(a.length() < b.length()) a = '.' + a;
    while(b.length() < a.length()) b = '.' + b;

    string c = "", d = "";
    bool e = false, f = false;

    for(int i=0; i<a.length(); i++) {
        if(a[i] > b[i]) {
            c += a[i];
            e = true;
        }
        else if(a[i] < b[i]) {
            d += b[i];
            f = true;
        }
        else {
            c += a[i];
            d += b[i];
            e = f = true;
        }
    }

    if(e) cout << stoll(c) << "\n";
    else cout << "YODA\n";

    if(f) cout << stoll(d) << "\n";
    else cout << "YODA\n";
}
