#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    vector<int> v = {620, 590, 570, 495, 450, 425, 380};
    vector<string> u = {"Red", "Orange", "Yellow", "Green", "Blue", "Indigo", "Violet"};

    int x; cin >> x;

    for(int i=0; i<v.size(); i++)
        if(x >= v[i]) {
            cout << u[i] << "\n";
            break;
        }
}
