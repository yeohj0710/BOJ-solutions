#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N; cin >> N;

    vector<vector<char>> v(10, vector<char>(20, '.'));

    while(N--) {
        string str; cin >> str;

        v[str[0]- 'A'][stoi(str.substr(1, str.length() - 1)) - 1] = 'o';
    }

    for(int i=0; i<10; i++) {
        for(int j=0; j<20; j++) cout << v[i][j];
        cout << "\n";
    }
}
