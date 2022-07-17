#include <bits/stdc++.h>
#define int long long
using namespace std;

int v[3][3], u[3][3], ans = INT_MAX;
int vis[9] = {};

void f(int cnt) {
    if(cnt == 9) {
        bool check = true;

        for(int i=0; i<3; i++) {
            int sum = 0;
            for(int j=0; j<3; j++) sum += u[i][j];
            if(sum != 15) check = false;
        }

        for(int i=0; i<3; i++) {
            int sum = 0;
            for(int j=0; j<3; j++) sum += u[j][i];
            if(sum != 15) check = false;
        }

        if(u[0][0] + u[1][1] + u[2][2] != 15) check = false;
        if(u[0][2] + u[1][1] + u[2][0] != 15) check = false;

        if(!check) return;

        int temp = 0;
        for(int i=0; i<3; i++)
            for(int j=0; j<3; j++) temp += abs(v[i][j] - u[i][j]);

        ans = min(ans, temp);

        return;
    }

    int x = cnt / 3;
    int y = cnt % 3;

    for(int i=0; i<9; i++) {
        if(!vis[i]) {
            u[x][y] = i+1;
            vis[i] = true;

            f(cnt+1);

            vis[i] = false;
        }
    }
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    for(int i=0; i<3; i++)
        for(int j=0; j<3; j++) cin >> v[i][j];

    f(0);

    cout << ans << "\n";
}
