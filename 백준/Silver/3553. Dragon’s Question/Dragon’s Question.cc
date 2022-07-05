#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    string str = to_string(M);

    if(str.length() > N) {
        cout << "No solution\n";
        return 0;
    }

    while(str.length() < N) str += '0';

    cout << str << "\n";
}
