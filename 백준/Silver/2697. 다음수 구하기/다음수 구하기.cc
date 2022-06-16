#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    while(T--) {
        string str; cin >> str;

        if(next_permutation(str.begin(), str.end())) cout << str << "\n";
        else cout << "BIGGEST\n";
    }
}
