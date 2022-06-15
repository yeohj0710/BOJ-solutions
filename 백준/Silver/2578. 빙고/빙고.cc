#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    vector<vector<int>> v(5, vector<int>(5));

    for(int i=0; i<5; i++)
        for(int j=0; j<5; j++) cin >> v[i][j];

    vector<int> u(25);

    for(int i=0; i<25; i++) cin >> u[i];

    vector<vector<bool>> w(5, vector<bool>(5));

    for(int i=0; i<25; i++) {
        for(int j=0; j<5; j++)
            for(int k=0; k<5; k++)
                if(v[j][k] == u[i]) w[j][k] = true;

        int cnt = 0;
        bool check;

        for(int j=0; j<5; j++) {
            check = true;
            for(int k=0; k<5; k++)
                if(!w[j][k]) check = false;
            if(check) cnt++;
        }

        for(int j=0; j<5; j++) {
            check = true;
            for(int k=0; k<5; k++)
                if(!w[k][j]) check = false;
            if(check) cnt++;
        }

        check = true;
        for(int j=0; j<5; j++)
            if(!w[j][j]) check = false;
        if(check) cnt++;

        check = true;
        for(int j=0; j<5; j++)
            if(!w[j][4-j]) check = false;
        if(check) cnt++;

        if(cnt >= 3) {
            cout << i+1 << "\n";
            break;
        }
    }
}
