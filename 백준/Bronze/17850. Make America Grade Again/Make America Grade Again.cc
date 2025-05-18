#include <bits/stdc++.h>
#define int long long
using namespace std;

vector<string> split(string str, string sep) {
    vector<string> v;
    int x = 0, y = str.find(sep);

    while(y != -1) {
        v.push_back(str.substr(x, y - x));
        x = y + sep.length();
        y = str.find(sep, x);
    }
    v.push_back(str.substr(x));

    return v;
}

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int l, h, p, e, n; cin >> l >> h >> p >> e >> n;

    vector<double> v(4), u(4);

    while(n--) {
        string a, b, c; cin >> a >> b >> c;

        vector<string> w = split(c, "/");

        if(a == "Lab") v[0] += stoi(w[0]), u[0] += stoi(w[1]);
        else if(a == "Hw") v[1] += stoi(w[0]), u[1] += stoi(w[1]);
        else if(a == "Proj") v[2] += stoi(w[0]), u[2] += stoi(w[1]);
        else if(a == "Exam") v[3] += stoi(w[0]), u[3] += stoi(w[1]);
    }

    int ans = v[0] / u[0] * l + v[1] / u[1] * h + v[2] / u[2] * p + v[3] / u[3] * e;

    cout << ans << "\n";
}
