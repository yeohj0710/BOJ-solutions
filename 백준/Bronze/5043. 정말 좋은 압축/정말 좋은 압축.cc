#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    int sum = 0;

    for(int i=0; i<=M; i++) sum += pow(2, i);

    if(N <= sum) cout << "yes\n";
    else cout << "no\n";
}
