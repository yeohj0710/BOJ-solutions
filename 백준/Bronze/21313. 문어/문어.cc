#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    if(N % 2 == 0)
        for(int i=0; i<N; i++) {
            if(i % 2 == 0) cout << "1 ";
            else cout << "2 ";
        }
    else {
        for(int i=0; i<N-1; i++) {
            if(i % 2 == 0) cout << "1 ";
            else cout << "2 ";
        }
        cout << "3 ";
    }
}
