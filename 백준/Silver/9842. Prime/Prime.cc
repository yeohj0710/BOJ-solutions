#include <bits/stdc++.h>
#define int long long
using namespace std;

vector<bool> p(150001, true);

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    for(int i=2; i*i<=150000; i++)
        for(int j=2; i*j<=150000; j++) p[i*j] = false;

    int N; cin >> N;

    int cnt = 0;
    for(int i=2; ; i++) {
        if(p[i]) cnt++;

        if(cnt == N) {
            cout << i << "\n";
            break;
        }
    }
}
