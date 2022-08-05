#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    int ans = 0;

    while(N > 0) {
        string str = to_string(N);

        string temp = "";

        for(int i=0; i<str.length() && stoll(temp + '1') <= N; i++) temp += '1';

        int x = stoll(temp);

        while(N >= x) {
            N -= x;
            ans++;
        }
    }

    cout << ans << "\n";
}
