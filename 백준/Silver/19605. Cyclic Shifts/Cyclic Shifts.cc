#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    string a, b; cin >> a >> b;

    bool check = false;
    for(int i=0; i<b.length(); i++) {
        b = b.substr(1, b.length()) + b[0];

        for(int j=0; j<a.length()-b.length()+1; j++)
            if(a.substr(j, b.length()) == b) check = true;
    }

    if(check) cout << "yes\n";
    else cout << "no\n";
}
