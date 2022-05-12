#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    while(true) {
        string str; cin >> str;
        if(str == "#") break;

        int Y = 0, N = 0, A = 0;
        for(int i=0; i<str.length(); i++) {
            if(str[i] == 'Y') Y++;
            else if(str[i] == 'N') N++;
            else if(str[i] == 'A') A++;
        }

        if(A >= (str.length() + 1)/2) cout << "need quorum\n";
        else if(Y > N) cout << "yes\n";
        else if(Y < N) cout << "no\n";
        else cout << "tie\n";
    }
}
