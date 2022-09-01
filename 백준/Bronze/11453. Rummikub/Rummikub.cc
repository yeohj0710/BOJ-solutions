#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    while(T--) {
        int N; cin >> N;

        bool v[101][4] = {};

        while(N--) {
            string str; cin >> str;

            int x = stoi(str.substr(0, str.length()-1));
            char y = str.back();

            if(y == 'b') v[x][0] = true;
            else if(y == 'g') v[x][1] = true;
            else if(y == 'r') v[x][2] = true;
            else if(y == 'y') v[x][3] = true;
        }

        bool check = false;

        for(int i=0; i<4; i++)
            for(int j=3; j<=100; j++)
                if(v[j-2][i] && v[j-1][i] && v[j][i]) check = true;

        for(int i=1; i<=100; i++) {
            int cnt = 0;

            for(int j=0; j<4; j++)
                if(v[i][j]) cnt++;

            if(cnt >= 3) check = true;
        }

        if(check) cout << "YES\n";
        else cout << "NO\n";
    }
}
