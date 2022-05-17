#include <bits/stdc++.h>
#define int long long
using namespace std;

string str;
char ans[5];
bool check[5] = {};

void f(int idx) {
    if(idx == str.length()) {
        for(int i=0; i<str.length(); i++) cout << ans[i];
        cout << "\n";
    }

    for(int i=0; i<str.length(); i++) {
        if(!check[i]) {
            check[i] = true;

            ans[idx] = str[i];
            f(idx+1);

            check[i] = false;
        }
    }
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    for(int t=1; t<=T; t++) {
        cin >> str;

        cout << "Case # " << t << ":\n";

        f(0);
    }
}
