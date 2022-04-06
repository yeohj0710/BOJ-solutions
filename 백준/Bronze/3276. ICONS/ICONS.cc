#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int N;
    cin >> N;

    for(int i=1; i<=N; i++) {
        if(i*i >= N) {
            cout << i << " " << i;
            return 0;
        }
        else if(i*(i+1) >= N) {
            cout << i << " " << i+1;
            return 0;
        }
    }
}
