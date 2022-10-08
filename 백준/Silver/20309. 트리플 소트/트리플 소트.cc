#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    deque<int> v, u;

    for(int i=0; i<N; i++) {
        int x; cin >> x;

        if(i % 2 == 0) v.push_back(x);
        else u.push_back(x);
    }

    sort(v.begin(), v.end());
    sort(u.begin(), u.end());

    vector<int> w;

    while(!v.empty() || !u.empty()) {
        if(!v.empty()) {
            w.push_back(v.front());
            v.pop_front();
        }
        if(!u.empty()) {
            w.push_back(u.front());
            u.pop_front();
        }
    }

    bool check = true;

    for(int i=1; i<w.size(); i++)
        if(w[i-1] > w[i]) check = false;

    if(check) cout << "YES\n";
    else cout << "NO\n";
}
