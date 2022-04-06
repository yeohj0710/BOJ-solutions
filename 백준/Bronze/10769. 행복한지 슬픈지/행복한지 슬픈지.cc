#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    string str; getline(cin, str);

    int cnt[2] = {};

    if(str.length() < 3) {
        cout << "none";
        return 0;
    }

    for(int i=2; i<str.length(); i++) {
        if(str[i-2] == ':' && str[i-1] == '-' && str[i] == ')') cnt[0]++;
        else if(str[i-2] == ':' && str[i-1] == '-' && str[i] == '(') cnt[1]++;
    }

    if(cnt[0] == 0 && cnt[1] == 0) cout << "none";
    else if(cnt[0] == cnt[1]) cout << "unsure";
    else if(cnt[0] > cnt[1]) cout << "happy";
    else if(cnt[0] < cnt[1]) cout << "sad";
}
