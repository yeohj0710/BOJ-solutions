#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    vector<char> v = {'B', 'R', 'O', 'N', 'Z', 'E', 'S', 'I', 'L', 'V'};
    vector<int> u = {1, 2, 1, 1, 1, 2, 1, 1, 1, 1};
    vector<int> w(10);

    int N; string str; cin >> N >> str;

    for(int i=0; i<N; i++)
        for(int j=0; j<10; j++)
            if(str[i] == v[j]) w[j]++;

    int ans = 0;

    while(true) {
        bool chk = true;

        for(int i=0; i<10; i++) {
            w[i] -= u[i];

            if(w[i] < 0) {
                chk = false;
                break;
            }
        }

        if(chk) ans++;
        else break;
    }

    cout << ans << "\n";
}
