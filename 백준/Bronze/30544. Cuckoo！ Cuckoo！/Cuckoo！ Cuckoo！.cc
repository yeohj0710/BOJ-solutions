#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    string str; cin >> str;

    int h = stoi(str.substr(0, 2));
    int m = stoi(str.substr(3, 2));

    int N; cin >> N;

    while(true) {
        if(m == 0) N -= h;
        else if(m == 15 || m == 30 || m == 45) N--;

        if(N <= 0) break;

        m++;

        if(m == 60) {
            h++;
            m = 0;

            if(h == 13) h = 1;
        }
    }

    string a = to_string(h), b = to_string(m);

    while(a.length() < 2) a = '0' + a;
    while(b.length() < 2) b = '0' + b;

    cout << a << ":" << b << "\n";
}
