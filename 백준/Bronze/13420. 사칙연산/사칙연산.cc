#include <bits/stdc++.h>
using namespace std;

int main() {
    int T; cin >> T;

    while(T--) {
        long long a, b, c; char op;
        scanf("%lld %c %lld = %lld", &a, &op, &b, &c);

        if((op == '+' && a+b == c) || (op == '-' && a-b == c)
           || (op == '*' && a*b == c) || (op == '/' && a == b*c)) cout << "correct\n";
        else cout << "wrong answer\n";
    }
}
