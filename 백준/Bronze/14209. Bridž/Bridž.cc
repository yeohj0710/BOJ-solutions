#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    int ans = 0;
    for(int i=0; i<N; i++) {
        string str; cin >> str;
        for(int j=0; j<13; j++) {
            if(str[j] == 'A') ans += 4;
            else if(str[j] == 'K') ans += 3;
            else if(str[j] == 'Q') ans += 2;
            else if(str[j] == 'J') ans += 1;
        }
    }

    cout << ans << "\n";
}
