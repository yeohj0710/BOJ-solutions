#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main(){
    cin.tie(0)->sync_with_stdio(0);

    string str; cin >> str;

    sort(str.begin(), str.end());

    while(true) {
        cout << str << "\n";

        if(!next_permutation(str.begin(), str.end())) break;
    }
}
