#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    char arr[3][3];

    for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++) cin >> arr[i][j];
        cin.ignore();
    }

    bool check = false;

    for(int i=0; i<3; i++)
        if(arr[i][0] == arr[i][1] && arr[i][0] == arr[i][2] && arr[i][0] != '.') check = true;

    for(int i=0; i<3; i++)
        if(arr[0][i] == arr[1][i] && arr[0][i] == arr[2][i] && arr[0][i] != '.') check = true;

    if(arr[0][0] == arr[1][1] && arr[0][0] == arr[2][2] && arr[0][0] != '.') check = true;

    if(arr[0][2] == arr[1][1] && arr[0][2] == arr[2][0] && arr[0][2] != '.') check = true;

    if(check) cout << "YES\n";
    else cout << "NO\n";
}
