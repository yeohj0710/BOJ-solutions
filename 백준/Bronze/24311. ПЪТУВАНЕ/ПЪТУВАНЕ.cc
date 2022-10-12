#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    vector<int> v(7);

    for(int i=0; i<7; i++) cin >> v[i];

    int sum = v[0] * 60 + v[1];

    sum -= v[2];

    sum -= v[3] * 60 + v[4];

    sum -= (v[5] + 1) * v[6];

    sum -= 10;

    while(sum < 0) sum += 24 * 60;

    string a = to_string(sum / 60);
    string b = to_string(sum % 60);

    while(a.length() < 2) a = '0' + a;
    while(b.length() < 2) b = '0' + b;

    cout << a << " " << b << "\n";
}
