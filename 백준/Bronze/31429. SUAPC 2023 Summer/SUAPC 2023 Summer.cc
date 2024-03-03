#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    vector<int> v = {12, 11, 11, 10, 9, 9, 9, 8, 7, 6, 6};
    vector<int> u = {1600, 894, 1327, 1311, 1004, 1178, 1357, 837, 1055, 556, 773};

    int N; cin >> N;

    cout << v[N-1] << " " << u[N-1] << "\n";
}
