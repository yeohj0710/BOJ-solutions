#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<string> op(N);
    vector<int> val(N);

    for(int i=0; i<N; i++) cin >> op[i] >> val[i];

    int ans = 0;

    for(int i=1; i<=100; i++) {
        double temp = i;
        bool check = true;

        for(int j=0; j<N; j++) {
            string str = op[j];
            int x = val[j];

            if(str == "ADD") temp += x;
            else if(str == "SUBTRACT") temp -= x;
            else if(str == "MULTIPLY") temp *= x;
            else temp /= x;

            if(temp != (int)temp || temp < 0) check = false;
        }

        if(!check) ans++;
    }

    cout << ans << "\n";
}
