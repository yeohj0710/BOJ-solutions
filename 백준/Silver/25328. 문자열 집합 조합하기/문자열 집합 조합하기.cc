#include <bits/stdc++.h>
#define int long long
using namespace std;

string v[3];
vector<string> u;
int N;

void f(int idx, string str, int num) {
    if(idx == v[num].length()) {
        if(str.length() == N) u.push_back(str);
        return;
    }

    f(idx+1, str+v[num][idx], num);
    f(idx+1, str, num);
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    for(int i=0; i<3; i++) cin >> v[i];

    cin >> N;

    for(int i=0; i<3; i++) f(0, "", i);

    sort(u.begin(), u.end());

    vector<string> w;

    int cnt = 1;
    for(int i=1; i<u.size(); i++) {
        if(u[i] == u[i-1]) cnt++;
        else {
            if(cnt >= 2) w.push_back(u[i-1]);
            cnt = 1;
        }
    }
    if(cnt >= 2) w.push_back(u.back());

    sort(w.begin(), w.end());

    if(w.size() != 0) {
        for(int i=0; i<w.size(); i++) cout << w[i] << "\n";
    }
    else cout << -1 << "\n";
}
