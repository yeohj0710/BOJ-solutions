#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    string str = "";
    while(N > 0) {
        str = char('0' + N % 3) + str;
        N /= 3;
    }
    
    bool a = false, b = true;
    for(int i=0; i<str.length(); i++) {
        if(str[i] == '1') a = true;
        if(str[i] == '2') b = false;
    }

    if(a && b) cout << "YES\n";
    else cout << "NO\n";
}
