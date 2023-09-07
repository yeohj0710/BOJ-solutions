#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    vector<string> v = {"A+", "A", "B+", "B", "C+", "C", "D+", "D", "F"};
    vector<double> u = {4.5, 4.0, 3.5, 3.0, 2.5, 2.0, 1.5, 1.0, 0};

    string str; cin >> str;

    string grade = "";
    double tot = 0;
    int cnt = 0;

    for(int i=0; i<str.length(); i++) {
        grade += str[i];

        if(i+1 < str.length() && str[i+1] == '+') continue;

        int idx;

        for(int j=0; j<v.size(); j++)
            if(v[j] == grade) idx = j;

        tot += u[idx];
        cnt++;
        grade = "";
    }

    cout << fixed << setprecision(4);

    cout << tot / cnt << "\n";
}
