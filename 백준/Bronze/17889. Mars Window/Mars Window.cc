#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    int cnt = 0;

    for(int i=2018; i<=10000; i++) {
        bool check = false;

        for(int j=1; j<=12; j++) {
            cnt++;

            if(cnt % 26 == 4) check = true;
        }

        if(i == N) {
            if(check) cout << "yes\n";
            else cout << "no\n";

            break;
        }
    }
}
