#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    int i;
    for(i=1; i*i<=N; i++) ;

    cout << i-1 << "\n";
}
