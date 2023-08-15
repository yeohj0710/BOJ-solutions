#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N; string str; cin >> N >> str;

    vector<int> v(4);

    for(int i=0; i<N; i++) {
        if(str[i] == 'N') v[0]++;
        else if(str[i] == 'S') v[1]++;
        else if(str[i] == 'W') v[2]++;
        else v[3]++;
    }

    sort(v.begin(), v.end(), greater<int>());

    cout << v[1] + v[2] + v[3] << "\n";
}

