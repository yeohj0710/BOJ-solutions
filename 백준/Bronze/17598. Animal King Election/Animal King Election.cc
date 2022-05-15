#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int a = 0, b = 0;

    for(int i=0; i<9; i++) {
        string str; cin >> str;

        if(str == "Tiger") a++;
        else b++;
    }

    if(a > b) cout << "Tiger\n";
    else cout << "Lion\n";
}
