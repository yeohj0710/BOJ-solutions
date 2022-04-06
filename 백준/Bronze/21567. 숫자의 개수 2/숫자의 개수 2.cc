#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    long long a, b, c; cin >> a >> b >> c;
    long long mul = a * b * c;
    string str = to_string(mul);

    int cnt[10] = {};
    for(int i=0; i<str.length(); i++) cnt[str[i] - '0']++;

    for(int i=0; i<10; i++) cout << cnt[i] << "\n";
}
