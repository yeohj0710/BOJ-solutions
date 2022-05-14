#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    vector<int> v(10);
    for(int i=0; i<10; i++) cin >> v[i];

    int x, y, x_idx, y_idx;
    bool check = false;
    for(int i=0; i<10; i++)
        if(v[i] != 0) {
            if(!check) {
                x = v[i];
                x_idx = i;
                check = true;
            }
            else {
                y = v[i];
                y_idx = i;
            }
        }

    if((y - x) % (y_idx - x_idx) != 0) {
        cout << "-1";
        return 0;
    }

    int add = (y - x) / (y_idx - x_idx);

    v[0] = y - y_idx * add;

    for(int i=1; i<10; i++) v[i] = v[i-1] + add;

    for(int i=0; i<10; i++) cout << v[i] << " ";
}
