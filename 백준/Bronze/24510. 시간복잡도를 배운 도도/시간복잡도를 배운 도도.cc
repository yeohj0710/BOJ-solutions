#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    int Max = 0;

    while(N--) {
        string str; cin >> str;

        int cnt = 0;
        for(int i=0; i<str.length(); i++) {
            if(i+2 < str.length() && str.substr(i, 3) == "for") cnt++;
            if(i+4 < str.length() && str.substr(i, 5) == "while") cnt++;
        }

        if(cnt > Max) Max = cnt;
    }

    cout << Max;
}
