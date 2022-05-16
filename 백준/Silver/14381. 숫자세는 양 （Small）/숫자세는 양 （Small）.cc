#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    for(int t=1; t<=T; t++) {
        cout << "Case #" << t << ": ";

        int N; cin >> N;

        vector<int> v;
        bool cnt[10] = {};

        while(true) {
            bool check = false;
            for(int i=0; i<v.size(); i++)
                if(N == v[i]) {
                    cout << "INSOMNIA\n";
                    check = true;
                    break;
                }
            if(check) break;

            v.push_back(N);

            int temp = N;
            while(temp > 0) {
                cnt[temp % 10] = true;
                temp /= 10;
            }

            check = true;
            for(int i=0; i<10; i++)
                if(!cnt[i]) check = false;

            if(check) {
                cout << N << "\n";
                break;
            }

            N += v[0];
        }
    }
}
