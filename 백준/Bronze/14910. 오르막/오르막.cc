#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int val;
    vector<int> u, v;

    while(cin >> val) {
        u.push_back(val);
        v.push_back(val);
    }

    sort(v.begin(), v.end());

    bool check = true;
    for(int i=0; i<u.size(); i++)
        if(u[i] != v[i]) check = false;

    if(check) cout << "Good\n";
    else cout << "Bad\n";
}
