#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int v[6];
    for(int i=0; i<6; i++) cin >> v[i];

    if(v[0] == -1 && v[4] != -1 && v[5] != -1) v[0] = v[5] - v[4];
    if(v[0] != -1 && v[4] == -1 && v[5] != -1) v[4] = v[5] - v[0];
    if(v[0] != -1 && v[4] != -1 && v[5] == -1) v[5] = v[0] + v[4];

    if(v[1] == -1 && v[2] != -1 && v[3] != -1) v[1] = v[2] - v[3];
    if(v[1] != -1 && v[2] == -1 && v[3] != -1) v[2] = v[1] + v[3];
    if(v[1] != -1 && v[2] != -1 && v[3] == -1) v[3] = v[2] - v[1];

    if(v[0] == -1 && v[4] == -1 && v[5] == 0) v[0] = v[4] = 0;
    if(v[1] == -1 && v[3] == -1 && v[2] == 0) v[1] = v[3] = 0;

    for(int i=0; i<3; i++) cout << v[i] << " ";
    cout << "\n";
    for(int i=3; i<6; i++) cout << v[i] << " ";
    cout << "\n";
}
