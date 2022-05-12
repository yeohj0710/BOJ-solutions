#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    string str; cin >> str;

    int cnt = 0;
    for(int i=0; i<N; i++) {
        if(str[i] == 'J' || str[i] == 'A' || str[i] == 'V') cnt++;
        else cout << str[i];
    }

    if(cnt == N) cout << "nojava\n";
}
