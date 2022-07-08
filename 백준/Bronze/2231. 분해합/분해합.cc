#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    for(int i=1; i<=N; i++) {
        string str = to_string(i);

        int sum = i;
        for(int j=0; j<str.length(); j++) sum += str[j] - '0';

        if(sum == N) {
            cout << i << "\n";
            return 0;
        }
    }

    cout << 0 << "\n";
}
