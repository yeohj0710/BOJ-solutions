#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    string str; cin >> str;

    vector<int> v(N);
    for(int i=0; i<N; i++) cin >> v[i];

    bool check;
    if(str[0] == 'B') check = true;
    else check = false;

    vector<int> u, temp;
    bool first = true;

    for(int i=0; i<N; i++) {
        if((check && str[i] == 'B') || (!check && str[i] == 'W')) temp.push_back(v[i]);
        else {
            sort(temp.begin(), temp.end(), greater<int>());
            if(!first) u.push_back(temp[0]);
            else first = false;

            temp.clear();
            temp.push_back(v[i]);

            check = !check;
        }
    }

    sort(u.begin(), u.end(), greater<int>());

    int ans = 0;
    for(int i=0; i<(u.size()+1)/2; i++) ans += u[i];

    cout << ans << "\n";
}
