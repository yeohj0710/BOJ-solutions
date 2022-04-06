#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int a, a_, b, b_, c, c_;
    cin >> a >> a_ >> b >> b_ >> c >> c_;

    int temp;
    for(int i=0; i<33; i++) {
        temp = min(a_, b - b_); a_ -= temp; b_ += temp;
        temp = min(b_, c - c_); b_ -= temp; c_ += temp;
        temp = min(c_, a - a_); c_ -= temp; a_ += temp;
    }
    temp = min(a_, b - b_); a_ -= temp; b_ += temp;

    cout << a_ << "\n" << b_ << "\n" << c_;
}
