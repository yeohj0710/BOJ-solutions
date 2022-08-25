#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<int> v(N);
    for(int i=0; i<N; i++) cin >> v[i];

    sort(v.begin(), v.end());

    vector<int> u;

    string a = to_string(v[0]);
    string b = to_string(v[1]);
    string c = to_string(v[2]);

    u.push_back(stoll(a + b));
    u.push_back(stoll(b + a));
    u.push_back(stoll(b + c));
    u.push_back(stoll(c + b));
    u.push_back(stoll(c + a));
    u.push_back(stoll(a + c));

    if(N >= 4) {
        string d = to_string(v[3]);

        u.push_back(stoll(a + d));
        u.push_back(stoll(b + d));
        u.push_back(stoll(c + d));
        u.push_back(stoll(d + a));
        u.push_back(stoll(d + b));
        u.push_back(stoll(d + c));
    }

    sort(u.begin(), u.end());

    cout << u[2] << "\n";
}
