#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    string str; cin >> str;

    int cnt[9] = {};
    for(int i=0; i<str.length(); i++) {
        if(str[i] == '9') {
            cnt[6]++;
            continue;
        }

        cnt[str[i] - '0']++;
    }

    cnt[6] = (cnt[6] + 1)/2;

    int Max = 0;
    for(int i=0; i<9; i++)
        Max = max(Max, cnt[i]);

    cout << Max;
}
