#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    int cnt = 0, i = 0, j = 0;
    while(cnt < (N-1+57)%60) {
        i = (i+1)%10;
        j = (j+1)%12;
        cnt++;
    }

    cout << char('A'+j) << char('0'+i);
}
