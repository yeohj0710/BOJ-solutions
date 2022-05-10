#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    string str; cin >> str;

    int A = 0, B = 0;
    int A_ = 0, B_ = 0;

    for(int i=0; i<str.length(); i++) {
        if(str[i] == 'A') A++;
        else B++;

        if(A == 21) A_++;
        else if(B == 21) B_++;

        if(A == 21 || B == 21) {
            cout << A << "-" << B << "\n";
            A = B = 0;
        }
    }

    if(A_ > B_) cout << "A\n";
    else cout << "B\n";
}
