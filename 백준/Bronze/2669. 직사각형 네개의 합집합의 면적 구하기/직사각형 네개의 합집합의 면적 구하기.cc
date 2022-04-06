#include <bits/stdc++.h>
using namespace std;

bool check[105][105] = {};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    for(int i=0; i<4; i++) {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        for(int j=x1; j<x2; j++)
            for(int k=y1; k<y2; k++) check[j][k] = true;
    }

    int cnt = 0;
    for(int i=0; i<100; i++)
        for(int j=0; j<100; j++)
            if(check[i][j]) cnt++;
    cout << cnt;
}
