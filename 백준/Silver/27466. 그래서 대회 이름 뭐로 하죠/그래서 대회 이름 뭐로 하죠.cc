#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N, M; cin >> N >> M;

    string str; cin >> str;

    int x = 0, idx = -1;

    for(int i=N-1; i>=0; i--) {
        if(x == 0 && str[i] != 'A' && str[i] != 'E' && str[i] != 'I' && str[i] != 'O' && str[i] != 'U') x++;
        else if(x == 1 && str[i] == 'A') x++;
        else if(x == 2 && str[i] == 'A') {
            idx = i;
            break;
        }
    }

    if(idx != -1 && idx + 3 >= M) {
        cout << "YES\n";
        cout << str.substr(0, M-3) << "AA" << str.back() << "\n";
    }
    else cout << "NO\n";
}
