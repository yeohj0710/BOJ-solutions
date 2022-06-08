#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    string str; cin >> str;

    int A = 0, B = 0, a = 0, b = 0;

    for(int i=0; i<N; i++) {
        if(str[i] == 'A') a++;
        else b++;

        if(A == 1 && B == 1) {
            if(a >= 15 && a >= b+2) A++;
            else if(b >= 15 && b >= a+2) B++;
        }
        else {
            if(a >= 25 && a >= b+2) A++, a = 0, b = 0;
            else if(b >= 25 && b >= a+2) B++, a = 0, b = 0;
        }
    }

    cout << A << " " << B << "\n";
}
