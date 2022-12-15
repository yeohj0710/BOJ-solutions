#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    ios_base::sync_with_stdio(0), cin.tie(0);

    int N; cin >> N;

    vector<int> v(N);
    int tot = 0;

    for(int i=0; i<N; i++) {
        cin >> v[i];

        tot += v[i];
    }

    vector<int> u;

    for(int i=0; i<pow(3, N); i++) {
        string str = "";

        int tmp = i;

        while(tmp > 0) {
            str = char('0' + tmp % 3) + str;
            tmp /= 3;
        }

        reverse(str.begin(), str.end());

        int sum = 0;

        for(int i=0; i<str.length(); i++) {
            if(str[i] == '1') sum += v[i];
            else if(str[i] == '2') sum -= v[i];
        }

        if(sum > 0) u.push_back(sum);
    }

    sort(u.begin(), u.end());
    u.erase(unique(u.begin(), u.end()), u.end());

    cout << tot - u.size() << "\n";
}
