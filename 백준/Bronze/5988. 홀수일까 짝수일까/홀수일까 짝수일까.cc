#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    while(N--) {
        string str; cin >> str;

        if(str.back() == '0' || str.back() == '2' || str.back() == '4'
           || str.back() == '6' || str.back() == '8') cout << "even\n";
        else cout << "odd\n";
    }
}
