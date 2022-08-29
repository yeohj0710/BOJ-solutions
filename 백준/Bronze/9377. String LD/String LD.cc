#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    while(true) {
        int N; cin >> N;
        if(N == 0) break;

        vector<string> v(N);
        for(int i=0; i<N; i++) cin >> v[i];

        for(int i=0; ; i++) {
            sort(v.begin(), v.end());

            bool check = false;

            for(int j=0; j<N; j++)
                if(v[j].length() == 1) check = true;

            for(int j=1; j<N; j++)
                if(v[j] == v[j-1]) check = true;

            if(check) {
                cout << i << "\n";
                break;
            }

            for(int j=0; j<N; j++)
                v[j] = v[j].substr(1, v[j].length()-1);

            sort(v.begin(), v.end());

            check = false;

            for(int j=1; j<N; j++)
                if(v[j] == v[j-1]) check = true;

            if(check) {
                cout << i << "\n";
                break;
            }
        }
    }
}
