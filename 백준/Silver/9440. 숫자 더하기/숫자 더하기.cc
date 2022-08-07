#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    while(true) {
        int N; cin >> N;
        if(N == 0) break;

        vector<int> v(N);
        for(int i=0; i<N; i++) cin >> v[i];

        sort(v.begin(), v.end());

        vector<bool> u(N);
        string a = "", b = "";

        while(true) {
            bool check = true;
            for(int i=0; i<N; i++)
                if(!u[i]) check = false;
            if(check) break;

            if(a.length() <= b.length()) {
                for(int i=0; i<N; i++) {
                    if(!u[i]) {
                        if(a.length() == 0 && v[i] == 0) continue;

                        a += char(v[i] + '0');
                        u[i] = true;
                        break;
                    }
                }
            }
            else {
                for(int i=0; i<N; i++) {
                    if(!u[i]) {
                        if(b.length() == 0 && v[i] == 0) continue;

                        b += char(v[i] + '0');
                        u[i] = true;
                        break;
                    }
                }
            }
        }

        cout << stoi(a) + stoi(b) << "\n";
    }
}
