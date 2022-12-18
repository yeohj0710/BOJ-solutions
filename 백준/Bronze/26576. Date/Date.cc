#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    ios::sync_with_stdio(0), cin.tie(0);

    cout << fixed << setprecision(2);

    int T; cin >> T;

    vector<string> mon = {"January", "February", "March", "April", "May", "June",
                            "July", "August", "September", "October", "November", "December"};

    while(T--) {
        string a, b, c; cin >> a >> b >> c;

        int idx = -1;

        for(int i=0; i<mon.size(); i++)
            if(a == mon[i]) idx = i;

        b = b.substr(0, b.length()-1);

        if(idx == -1 || stoi(b) < 1 || stoi(b) > 31) {
            cout << "Invalid\n";
            continue;
        }

        a = to_string(idx+1);

        while(a.length() < 2) a = '0' + a;
        while(b.length() < 2) b = '0' + b;
        while(c.length() < 2) c = '0' + c;

        cout << a << "/" << b << "/" << c.substr(c.length()-2, 2) << "\n";
    }
}
