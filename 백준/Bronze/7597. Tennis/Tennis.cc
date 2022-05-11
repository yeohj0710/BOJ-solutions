#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    while(true) {
        string str; cin >> str;
        if(str == "#") break;

        int A_ = 0, B_ = 0, A = 0, B = 0;

        for(int i=0; i<str.length(); i++) {
            if(str[i] == 'A') A++;
            else B++;

            if(A >= 4 && A >= B + 2) A = 0, B = 0, A_++;
            else if(B >= 4 && B >= A + 2) A = 0, B = 0, B_++;
        }

        cout << "A " << A_ << " B " << B_ << "\n";
    }
}
