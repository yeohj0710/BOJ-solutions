#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int N, A = 0, B = 0;
    cin >> N;
    while(N--) {
        char c;
        cin >> c;
        if(c == 'A') A++;
        else if(c == 'B') B++;
    }
    if(A > B) cout << "A";
    else if(A < B) cout << "B";
    else cout << "Tie";
}
