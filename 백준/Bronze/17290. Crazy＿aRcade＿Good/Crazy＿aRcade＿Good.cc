#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int x, y; cin >> x >> y;
    x--, y--;

    char arr[10][10];
    for(int i=0; i<10; i++) {
        for(int j=0; j<10; j++) cin >> arr[i][j];
        cin.ignore();
    }

    bool check[10][10] = {};
    for(int i=0; i<10; i++)
        for(int j=0; j<10; j++)
            if(arr[i][j] == 'o')
                for(int k=0; k<10; k++) check[i][k] = check[k][j] = true;

    int ans = INT_MAX;
    for(int i=0; i<10; i++)
        for(int j=0; j<10; j++)
            if(!check[i][j]) ans = min(ans, abs(x - i) + abs(y - j));

    cout << ans << "\n";
}
