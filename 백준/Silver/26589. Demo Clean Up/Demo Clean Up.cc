#include <bits/stdc++.h>
#define int long long
using namespace std;

vector<int> v, u;
int M, ans;

void f(int idx) {
    if(idx == v.size()) {
        ans = min(ans, (int)u.size());
        return;
    }

    for(int i=0; i<u.size(); i++) {
        if(u[i] + v[idx] > M) continue;

        u[i] += v[idx];
        f(idx + 1);
        u[i] -= v[idx];
    }

    u.push_back(v[idx]);
    f(idx + 1);
    u.pop_back();
}

signed main() {
    ios::sync_with_stdio(0), cin.tie(0);

    string str;

    while(getline(cin, str)) {
        v.clear();
        string tmp = "";
        M = -1;

        for(int i=0; i<str.length(); i++) {
            if(str[i] == ' ') {
                if(tmp != "") {
                    if(M == -1) M = stoi(tmp);
                    else v.push_back(stoi(tmp));
                }
                tmp = "";
            }
            else tmp += str[i];
        }
        if(tmp != "") v.push_back(stoi(tmp));

        u.clear();
        ans = INT_MAX;

        f(0);

        cout << ans << "\n";
    }
}
