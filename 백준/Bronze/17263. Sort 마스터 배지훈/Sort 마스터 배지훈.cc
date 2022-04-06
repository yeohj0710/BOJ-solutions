#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    int Max = 0;
    while(N--) {
        int value; cin >> value;
        if(value > Max) Max = value;
    }

    cout << Max;
}
