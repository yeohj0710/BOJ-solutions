#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N; cin >> N;

    vector<string> v;

    while(N--) {
        string str; cin >> str;

        if(str == "Present!") v.pop_back();
        else v.push_back(str);
    }

    if(v.size() == 0) {
        cout << "No Absences\n";
        return 0;
    }

    for(int i=0; i<v.size(); i++) cout << v[i] << "\n";
}
