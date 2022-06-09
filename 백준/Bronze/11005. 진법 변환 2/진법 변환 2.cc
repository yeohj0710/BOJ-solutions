#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    string str = "";

    while(N > 0) {
        if(N % M < 10) str = char('0' + N % M) + str;
        else str = char('A' + N % M - 10) + str;

        N /= M;
    }

    cout << str << "\n";
}
