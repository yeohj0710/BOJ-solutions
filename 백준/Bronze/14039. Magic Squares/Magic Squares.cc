#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int v[4][4];

    for(int i=0; i<4; i++)
        for(int j=0; j<4; j++) cin >> v[i][j];

    bool check = true;
    int sum = v[0][0] + v[0][1] + v[0][2] + v[0][3];

    for(int i=0; i<4; i++) {
        int x = 0, y = 0;
        for(int j=0; j<4; j++) {
            x += v[i][j];
            y += v[j][i];
        }

        if(x != sum || y != sum) check = false;
    }

    if(check) cout << "magic\n";
    else cout << "not magic\n";
}
