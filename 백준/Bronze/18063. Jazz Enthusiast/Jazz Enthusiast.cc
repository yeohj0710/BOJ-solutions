#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, c; cin >> N >> c;

    int sum = 0;

    for(int i=0; i<N; i++) {
        int a, b; char ch;
        cin >> a >> ch >> b;

        sum += a*60 + b;
    }

    sum -= c * (N-1);

    printf("%02d:%02d:%02d\n", sum/3600, (sum%3600)/60, sum%60);
}
