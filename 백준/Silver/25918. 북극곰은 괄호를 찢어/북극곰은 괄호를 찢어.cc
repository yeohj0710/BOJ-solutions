#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    string str; cin >> str;

    int cnt = 0, Max = 0;

    for(int i=0; i<N; i++) {
        if(str[i] == '(') cnt++;
        else cnt--;

        Max = max(Max, abs(cnt));
    }

    if(cnt != 0) {
        cout << -1 << "\n";
        return 0;
    }

    cout << Max << "\n";
}
