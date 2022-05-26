#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    string str = "SciComLove";

    N = N % 10;

    str = str.substr(N, str.length()-N) + str.substr(0, N);

    cout << str << "\n";
}
