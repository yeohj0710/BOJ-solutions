#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    vector<int> cnt(M);
    while(N--) {
        int value; cin >> value;
        cnt[value-1]++;
    }

    int Max = 0, num;
    for(int i=0; i<M; i++)
        if(cnt[i] > Max) Max = cnt[i];

    for(int i=0; i<M; i++)
        if(cnt[i] == Max) {
            cout << cnt[i];
            return 0;
        }
}
