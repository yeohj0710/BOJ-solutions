#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    int bit = 0;

    while(N--) {
        string Q; cin >> Q;

        if(Q == "add") {
            int x; cin >> x;

            bit = bit | (1 << x);
        }
        else if(Q == "remove") {
            int x; cin >> x;

            bit = bit & ~(1 << x);
        }
        else if(Q == "check") {
            int x; cin >> x;

            if(bit & (1 << x)) cout << "1\n";
            else cout << "0\n";
        }
        else if(Q == "toggle") {
            int x; cin >> x;

            bit = bit ^ (1 << x);
        }
        else if(Q == "all") bit = (1 << 21) - 1;
        else if(Q == "empty") bit = 0;
    }
}
