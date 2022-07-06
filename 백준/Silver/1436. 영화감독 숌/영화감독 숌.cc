#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    int cnt = 0;
    for(int i=1; ; i++) {
        string str = to_string(i);

        bool check = false;
        for(int j=2; j<str.length(); j++)
            if(str[j-2] == '6' && str[j-1] == '6' && str[j] == '6') check = true;

        if(check) cnt++;

        if(cnt == N) {
            cout << i << "\n";
            return 0;
        }
    }
}
