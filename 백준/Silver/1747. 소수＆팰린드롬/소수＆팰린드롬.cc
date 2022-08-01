#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int Max = 1e7;

    vector<bool> p(Max, true);
    p[1] = false;

    for(int i=2; i*i<Max; i++)
        for(int j=2; i*j<Max; j++) p[i*j] = false;

    vector<int> v;
    for(int i=2; i<Max; i++)
        if(p[i]) v.push_back(i);

    int N; cin >> N;

    int l = lower_bound(v.begin(), v.end(), N) - v.begin();

    for(int i=l; i<v.size(); i++) {
        string str = to_string(v[i]);

        bool check = true;
        for(int j=0; j<str.length(); j++)
            if(str[j] != str[str.length()-1-j]) check = false;

        if(check) {
            cout << v[i] << "\n";
            break;
        }
    }
}
