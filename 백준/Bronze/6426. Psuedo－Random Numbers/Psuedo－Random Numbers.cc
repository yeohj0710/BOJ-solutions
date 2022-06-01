#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    for(int t=1; ; t++) {
        int a, b, c, d; cin >> a >> b >> c >> d;
        if(a == 0 && b == 0 && c == 0 && d == 0) break;

        vector<int> v;
        v.push_back(d);

        while(true) {
            d = (a*d + b) % c;

            bool check = false;
            for(int i=0; i<v.size(); i++)
                if(d == v[i]) {
                    cout << "Case " << t << ": " << v.size() - i << "\n";
                    check = true;
                    break;
                }
            if(check) break;

            v.push_back(d);
        }
    }
}
