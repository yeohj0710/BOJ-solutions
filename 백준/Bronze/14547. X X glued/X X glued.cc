#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    while(true) {
        string str; cin >> str;
        if(str == "#") break;

        string a, b; cin >> a >> b;

        bool check[10] = {};

        for(int i=1; i<4; i++)
            if(a[i] == a[i-1]) check[a[i] - '0'] = true;

        bool over = false;
        for(int i=0; i<10; i++)
        if(check[i]) {
            if(over) cout << "and ";
            cout << i << " " << i << " glued ";
            over = true;
        }

        if(over) cout << "\n";
    }
}
