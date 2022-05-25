#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    while(T--) {
        int a, b, c, d, e, f, N; char ch;
        cin >> a >> ch >> b >> ch >> c >> d >> ch >> e >> ch >> f >> N;

        int st = a*60*60 + b*60 + c;
        int en = d*60*60 + e*60 + f;

        if(st >= en) en += 24*60*60;

        int diff = (en - st)/60;

        if(N <= diff) cout << "Perfect\n";
        else if(N <= diff + 60) cout << "Test\n";
        else cout << "Fail\n";
    }
}

