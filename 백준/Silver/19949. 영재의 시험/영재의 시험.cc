#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    vector<int> v(10);
    for(int i=0; i<10; i++) cin >> v[i];

    int ans = 0;

    for(int i=0; i<pow(5, 10); i++) {
        int temp = i;

        vector<int> u(10);

        for(int j=0; j<10; j++) {
            u[j] = temp % 5 + 1;
            temp /= 5;
        }

        bool check = true;
        for(int j=2; j<10; j++)
            if(u[j] == u[j-1] && u[j-1] == u[j-2]) check = false;

        if(!check) continue;

        int cnt = 0;

        for(int j=0; j<10; j++)
            if(v[j] == u[j]) cnt++;

        if(cnt >= 5) ans++;
    }

    cout << ans << "\n";
}
