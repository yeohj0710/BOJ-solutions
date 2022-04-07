#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    string x, y; cin >> x >> y;

    reverse(x.begin(), x.end());
    reverse(y.begin(), y.end());

    int temp = stoi(x) + stoi(y);

    while(temp % 10 == 0) temp /= 10;

    string temp_s = to_string(temp);

    reverse(temp_s.begin(), temp_s.end());

    cout << temp_s;
}
