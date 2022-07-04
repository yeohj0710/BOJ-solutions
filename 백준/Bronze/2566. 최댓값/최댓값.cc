#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int v[9][9] = {};
    for(int i=0; i<9; i++)
        for(int j=0; j<9; j++) cin >> v[i][j];

    int Max = INT_MIN, a, b;
    for(int i=0; i<9; i++)
        for(int j=0; j<9; j++)
            if(v[i][j] > Max) {
                Max = v[i][j];
                a = i+1, b = j+1;
            }

    cout << Max << "\n";
    cout << a << " " << b << "\n";
}
