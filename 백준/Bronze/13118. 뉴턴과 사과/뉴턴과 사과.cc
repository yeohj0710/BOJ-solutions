#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    vector<int> arr(4);
    for(int i=0; i<4; i++) cin >> arr[i];

    int x, y, r; cin >> x >> y >> r;

    bool check = false;
    for(int i=0; i<4; i++)
        if(pow(x - arr[i], 2) + pow(r, 2) <= pow(r, 2)) {
            cout << i+1 << " ";
            check = true;
        }

    if(!check) cout << "0\n";
}
