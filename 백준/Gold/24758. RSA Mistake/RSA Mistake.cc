#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int Max = 1e6 + 1;

    vector<bool> p(Max, true);
    p[1] = false;

    for(int i=2; i*i<Max; i++)
        for(int j=2; i*j<Max; j++) p[i*j] = false;

    vector<int> v;
    for(int i=2; i<Max; i++)
        if(p[i]) v.push_back(i);

    int a, b; cin >> a >> b;

    bool b1 = true, b2 = true;
    map<int, int> m;
    vector<int> u;

    int tmp = a;
    for(int i=0; i<v.size() && v[i]*v[i] <= a; i++)
        if(a % v[i] == 0) {
            b1 = false;

            while(tmp % v[i] == 0) {
                m[v[i]]++;
                tmp /= v[i];
                u.push_back(v[i]);
            }
        }
    if(tmp > 1) u.push_back(tmp);

    tmp = b;
    for(int i=0; i<v.size() && v[i]*v[i] <= b; i++)
        if(b % v[i] == 0) {
            b2 = false;

            while(tmp % v[i] == 0) {
                m[v[i]]++;
                tmp /= v[i];
                u.push_back(v[i]);
            }
        }
    if(tmp > 1) u.push_back(tmp);

    int x = u.size();

    sort(u.begin(), u.end());
    u.erase(unique(u.begin(), u.end()), u.end());

    int y = u.size();

    if(x == y && b1 && b2) cout << "full credit\n";
    else if(x == y) cout << "partial credit\n";
    else cout << "no credit\n";
}
