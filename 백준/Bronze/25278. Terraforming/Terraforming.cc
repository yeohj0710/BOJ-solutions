#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int a = -30, b = 0, c = 0;

    int N; cin >> N;

    while(N--) {
        string str; cin >> str;
        int x; cin >> x;

        if(str == "temperature") a += x;
        else if(str == "oxygen") b += x;
        else if(str == "ocean") c += x;
    }

    if(a >= 8 && b >= 14 && c >= 9) cout << "liveable\n";
    else cout << "not liveable\n";
}
