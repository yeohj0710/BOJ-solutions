#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    while(true) {
        string s; cin >> s;

        if(s == "END") break;

        vector<string> v;
        string tmp = "";
        for(int i=0; i<s.length(); i++) {
            if(s[i] == ',' || s[i] == '.') {
                v.push_back(tmp);
                tmp = "";
            }
            else tmp += s[i];
        }

        double x = 0, y = 0;

        for(int i=0; i<v.size(); i++) {
            int n = v[i].length();

            if(!(v[i][n-2] >= '0' && v[i][n-2] <= '9')) {
                int l = stoi(v[i].substr(0, n-2));
                string dir = v[i].substr(n-2, 2);

                if(dir == "NE") {
                    x += l / sqrt(2);
                    y += l / sqrt(2);
                }
                else if(dir == "SE") {
                    x += l / sqrt(2);
                    y -= l / sqrt(2);
                }
                else if(dir == "SW") {
                    x -= l / sqrt(2);
                    y -= l / sqrt(2);
                }
                else if(dir == "NW") {
                    x -= l / sqrt(2);
                    y += l / sqrt(2);
                }
            }
            else {
                int l = stoi(v[i].substr(0, n-1));
                string dir = v[i].substr(n-1, 1);

                if(dir == "N") y += l;
                else if(dir == "E") x += l;
                else if(dir == "S") y -= l;
                else if(dir == "W") x -= l;
            }
        }

        cout << fixed << setprecision(3);
        cout << "You can go to (" << x << "," << y << "), the distance is " << sqrt(x*x + y*y) << " steps.\n";
    }
}
