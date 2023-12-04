#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    vector<string> v = {"miss", "bad", "cool", "great", "perfect"};
    vector<int> u = {0, 200, 400, 600, 1000};

    int N; string str; cin >> N >> str;

    int idx = 0;

    for(int i=0; i<v.size(); i++)
        if(str == v[i]) idx = i;

    cout << N * u[idx] << "\n";
}
