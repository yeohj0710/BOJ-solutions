#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int sx, sy; cin >> sx >> sy;

    int N; cin >> N;

    int x = 0, y = 0;

    vector<int> v;
    if(abs(sx - x) <= 1 && abs(sy - y) <= 1) v.push_back(0);

    string str; cin >> str;

    for(int i=0; i<N; i++) {
        if(str[i] == 'I') x++;
        else if(str[i] == 'S') y++;
        else if(str[i] == 'Z') x--;
        else if(str[i] == 'J') y--;

        if(abs(sx - x) <= 1 && abs(sy - y) <= 1) v.push_back(i+1);
    }

    if(v.size() == 0) {
        cout << -1 << "\n";
        return 0;
    }

    for(int i=0; i<v.size(); i++) cout << v[i] << "\n";
}
