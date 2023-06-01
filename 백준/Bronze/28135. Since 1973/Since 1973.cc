#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N; cin >> N;

    int cnt = 0;

    for(int i=1; ; i++) {
        string str = to_string(i);

        cnt++;

        if(i == N) {
            cout << cnt << "\n";
            break;
        }

        for(int j=0; j<str.length()-1; j++)
            if(str[j] == '5' && str[j+1] == '0') {
                cnt++;
                break;
            }
    }
}
