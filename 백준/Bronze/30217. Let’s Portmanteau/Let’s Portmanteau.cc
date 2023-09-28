#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    string a, b; cin >> a >> b;

    string aa = "", bb = "", vow = "aeiou";

    aa += a[0], bb += b[b.length()-1];

    bool f1 = false, f2 = false;

    for(int i=1; i<a.length(); i++) {
        aa += a[i];

        bool chk = false;

        for(int j=0; j<vow.length(); j++)
            if(vow[j] == a[i]) chk = true;

        if(chk) {
            f1 = true;
            break;
        }
    }

    for(int i=b.length()-2; i>=0; i--) {
        bb = b[i] + bb;

        bool chk = false;

        for(int j=0; j<vow.length(); j++)
            if(vow[j] == b[i]) chk = true;

        if(chk) {
            f2 = true;
            break;
        }
    }

    if(f1 && f2) cout << aa.substr(0, aa.length()-1) << bb << "\n";
    else if(!f1 && f2) cout << aa << bb << "\n";
    else if(f1 && !f2) cout << aa << bb << "\n";
    else cout << aa << "o" << bb << "\n";
}
