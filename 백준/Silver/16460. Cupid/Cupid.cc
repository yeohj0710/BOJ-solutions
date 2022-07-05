#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    string a, b; cin >> a >> b;
    int c; cin >> c;

    vector<string> v;

    int N; cin >> N;

    while(N--) {
        string d, e; cin >> d >> e;
        int f; cin >> f;

        bool check = true;

        if(b == "M" && e != "M") check = false;
        if(b == "F" && e != "F") check = false;
        if(c < f) check = false;

        if(check) v.push_back(d);
    }

    sort(v.begin(), v.end());

    if(v.size() > 0) {
        for(int i=0; i<v.size(); i++) cout << v[i] << "\n";
    }
    else cout << "No one yet\n";
}
