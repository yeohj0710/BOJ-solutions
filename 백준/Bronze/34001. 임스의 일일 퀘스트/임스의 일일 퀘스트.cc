#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    vector<vector<int>> v = {{ 200, 210, 220 }, { 210, 220, 225 }, { 220, 225, 230 }, { 225, 230, 235}, { 230, 235, 245 }, { 235, 245, 250 }, { 260, 265, 270 }, { 265, 270, 275 }, { 270, 275, 280 }, { 275, 280, 285 }, { 280, 285, 290 }, { 285, 290, 295 }, { 290, 295, 300 }};
    vector<int> u(13);

    int n; cin >> n;

    for(int i=0; i<13; i++)
        if(n >= v[i][0]) u[i] = 500;

    for(int i=0; i<13; i++)
        for(int j=1; j<3; j++)
            if(n >= v[i][j] && u[i] > 0) u[i] -= 200;

    for(int i=0; i<6; i++) cout << u[i] << " ";
    cout << "\n";

    for(int i=6; i<13; i++) cout << u[i] << " ";
    cout << "\n";
}
