#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int Max = 1e4;

    vector<bool> p(Max, true);
    p[1] = false;

    for(int i=2; i*i<Max; i++)
        for(int j=2; i*j<Max; j++) p[i*j] = false;

    vector<int> v;
    for(int i=2; i<Max; i++)
        if(p[i]) v.push_back(i);

    while(true) {
        string str; cin >> str;
        int N; cin >> N;

        if(str == "END" && N == 0) break;

        if(N > v.back()) {
            N = 2;

            if(str[2] != 'Z') str[2] = char(str[2] + 1);
            else if(str[1] != 'Z') str[1] = char(str[1] + 1), str[2] = 'A';
            else str[0] = char(str[0] + 1), str[1] = 'A', str[2] = 'A';
        }
        else N = v[lower_bound(v.begin(), v.end(), N) - v.begin()];

        string num = to_string(N);
        while(num.length() < 4) num = '0' + num;

        cout << str << " " << num << "\n";
    }
}
