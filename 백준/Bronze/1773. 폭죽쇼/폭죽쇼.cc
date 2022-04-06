#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, T; cin >> N >> T;

    vector<bool> check(T+1);

    for(int i=0; i<N; i++) {
        int value; cin >> value;
        for(int j=1; j<=T; j++)
            if(j%value == 0) check[j] = true;
    }

    int cnt = 0;
    for(int i=1; i<=T; i++)
        if(check[i]) cnt++;

    cout << cnt;
}
