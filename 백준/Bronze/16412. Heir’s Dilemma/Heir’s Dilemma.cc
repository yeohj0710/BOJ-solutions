#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int a, b; cin >> a >> b;

    int ans = 0;

    for(int i=a; i<=b; i++) {
        int tmp = i;

        vector<int> cnt(10);

        while(tmp > 0) {
            cnt[tmp % 10]++;

            tmp /= 10;
        }

        bool check = true;

        for(int j=0; j<10; j++)
            if(cnt[j] >= 2) check = false;

        if(cnt[0] >= 1) check = false;

        if(!check) continue;

        for(int j=1; j<10; j++) {
            if(cnt[j] == 0) continue;

            if(i % j != 0) check = false;
        }

        if(check) ans++;
    }

    cout << ans << "\n";
}
