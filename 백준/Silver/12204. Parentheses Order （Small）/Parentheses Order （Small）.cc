#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    for(int t=1; t<=T; t++) {
        cout << "Case #" << t << ": ";

        int N, M; cin >> N >> M;

        vector<char> v(N*2);
        for(int i=0; i<N; i++) v[i] = '(';
        for(int i=N; i<N*2; i++) v[i] = ')';

        int idx = 1;
        bool fans = false;

        while(true) {
            bool check = true;
            int cnt = 0;

            for(int i=0; i<v.size(); i++) {
                if(v[i] == '(') cnt++;
                else cnt--;

                if(cnt < 0) check = false;
            }

            if(!check) {
                if(!next_permutation(v.begin(), v.end())) break;
                else continue;
            }

            if(idx == M) {
                for(int i=0; i<v.size(); i++) cout << v[i];
                cout << "\n";

                fans = true;
                break;
            }

            idx++;

            if(!next_permutation(v.begin(), v.end())) break;
        }

        if(!fans) cout << "Doesn't Exist!\n";
    }
}
