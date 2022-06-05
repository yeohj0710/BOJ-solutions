#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int a, b; char c; cin >> a >> c >> b;

    if(c == '-') {
        if(a/10000 > 20) printf("19%06d%04d", a, b);
        else printf("20%06d%04d", a, b);
    }
    else {
        if(a/10000 > 20) printf("18%06d%04d", a, b);
        else printf("19%06d%04d", a, b);
    }
}
