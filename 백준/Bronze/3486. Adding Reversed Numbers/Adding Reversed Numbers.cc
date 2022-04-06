#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    while(T--) {
        int a, b; cin >> a >> b;

        string str1 = to_string(a), str2 = to_string(b);
        reverse(str1.begin(), str1.end());
        reverse(str2.begin(), str2.end());

        int sum = stoi(str1) + stoi(str2);
        string strSum = to_string(sum);
        reverse(strSum.begin(), strSum.end());

        cout << stoi(strSum) << "\n";
    }
}
