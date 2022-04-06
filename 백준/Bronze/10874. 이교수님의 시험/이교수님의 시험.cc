#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;
    for(int t=1; t<=T; t++) {
        bool check = true;
        for(int i=1; i<=10; i++) {
            int val; cin >> val;
            if(val != (i-1)%5 + 1) check = false;
        }
        if(check) cout << t << "\n";
    }
}
