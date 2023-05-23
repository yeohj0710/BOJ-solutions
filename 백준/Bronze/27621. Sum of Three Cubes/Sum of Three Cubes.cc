#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N; cin >> N;

    vector<int> v = {4, 5, 13, 14, 22, 23, 31, 32, 40, 41, 49};

    for(int i=0; i<v.size(); i++)
        if(N == v[i]) {
            cout << 0 << "\n";
            return 0;
        }

    vector<vector<int>> u = {{16, -511, -1609, 1626},
        {24, -2901096694, -15550555555, 15584139827},
        {30, -283059965, -2218888517, 2220422932},
        {33, 8866128975287528, -8778405442862239, -2736111468807040},
        {39, 117367, 134476, -159380},
        {42, -80538738812075974, 80435758145817515, 12602123297335631}};

    for(int i=0; i<u.size(); i++)
        if(N == u[i][0]) {
            cout << u[i][1] << " " << u[i][2] << " " << u[i][3] << "\n";
            return 0;
        }

    for(int i=-23; i<=7; i++)
        for(int j=-26; j<=10; j++)
            for(int k=-11; k<=31; k++)
                if(i*i*i + j*j*j + k*k*k == N) {
                    cout << i << " " << j << " " << k << "\n";
                    return 0;
                }
}
