#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    int bed = 0, bal = 0, oth = 0;

    for(int i=0; i<N; i++) {
        int x; cin >> x;
        string str; cin >> str;

        if(str == "bedroom") bed += x;
        else if(str == "balcony") bal += x;
        else oth += x;
    }

    cout << bed + bal + oth << "\n";

    cout << bed << "\n";

    cout << fixed;
    cout.precision(6);

    cout << ((double)bal/2 + bed + oth) * M << "\n";
}
