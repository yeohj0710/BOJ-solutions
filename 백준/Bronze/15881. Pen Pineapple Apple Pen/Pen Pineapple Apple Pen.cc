#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    string str; cin >> str;

    int cnt = 0;
    for(int i=0; i<N-3; i++)
        if(str[i] == 'p' && str[i+1] == 'P' && str[i+2] == 'A' && str[i+3] == 'p') {
            cnt++;
            i += 3;
        }

    cout << cnt << "\n";
}
