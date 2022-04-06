#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    for(int i=1; ; i++) {
        int a, b; string op;
        cin >> a >> op >> b;

        if(op == "E") break;

        bool ans;
        if(op == ">") ans = (a > b);
        else if(op == ">=") ans = (a >= b);
        else if(op == "<") ans = (a < b);
        else if(op == "<=") ans = (a <= b);
        else if(op == "==") ans = (a == b);
        else if(op == "!=") ans = (a != b);

        cout << "Case " << i << ": ";
        if(ans) cout << "true\n";
        else cout << "false\n";
    }
}
