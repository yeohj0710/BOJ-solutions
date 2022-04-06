#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;
    string str; cin >> str;

    int cnt1 = 0, cnt2 = 0;
    for(int i=0; i<N; i++) {
        if(str[i] == '2') cnt1++;
        else if(str[i] == 'e') cnt2++;
    }

    if(cnt1 > cnt2) cout << "2";
    else if(cnt1 < cnt2) cout << "e";
    else cout << "yee";
}
