#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, K; cin >> N >> K;

    int Max = 0;
    for(int i=1; i<=K; i++) {
        string str = to_string(N*i);
        reverse(str.begin(), str.end());
        if(stoi(str) > Max) Max = stoi(str);
    }

    cout << Max;
}
