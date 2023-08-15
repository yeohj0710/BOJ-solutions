#include <bits/stdc++.h>
#define int long long
using namespace std;

string f(int x) {
    if(x % 3 == 0 && x % 5 == 0) return "FizzBuzz";
    else if(x % 3 == 0 && x % 5 != 0) return "Fizz";
    else if(x % 3 != 0 && x % 5 == 0) return "Buzz";
    else return to_string(x);
}

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    string a, b, c; cin >> a >> b >> c;

    int st = 1;

    if(atoi(a.c_str()) != 0) st = stoi(a);
    else if(atoi(b.c_str()) != 0) st = stoi(b) - 1;
    else if(atoi(c.c_str()) != 0) st = stoi(c) - 2;

    for(int i=st; ; i++) {
        string aa = f(i), bb = f(i+1), cc = f(i+2);

        if(aa == a && bb == b && cc == c) {
            cout << f(i+3) << "\n";
            break;
        }
    }
}

