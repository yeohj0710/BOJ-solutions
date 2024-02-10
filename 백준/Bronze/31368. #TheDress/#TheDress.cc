#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N; cin >> N; cin.ignore();

    int a = 0, b = 0;

    for(int i=0; i<N; i++) {
        string str; getline(cin, str);

        vector<string> u = {"gold", "white", "blue", "black"};
        vector<bool> w(4);

        for(int j=0; j<str.length(); j++) {
            for(int k=0; k<u.size(); k++) {
                if(j + u[k].length() > str.length()) continue;

                if(str.substr(j, u[k].length()) == u[k]) w[k] = true;
            }
        }

        if(w[0] && w[1]) a++;
        if(w[2] && w[3]) b++;
    }

    cout << fixed << setprecision(5);

    cout << (double)b / N * 100 << "\n";
    cout << (double)a / N * 100 << "\n";
    cout << (double)(N - a - b) / N * 100 << "\n";
}
