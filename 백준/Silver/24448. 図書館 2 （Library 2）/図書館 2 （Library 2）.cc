#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N; cin >> N;

    stack<string> s;
    vector<string> v;

    while(N--) {
        string str; cin >> str;

        if(str == "READ") {
            v.push_back(s.top());
            s.pop();
        }
        else s.push(str);
    }

    for(int i=0; i<v.size(); i++) cout << v[i] << "\n";
}
