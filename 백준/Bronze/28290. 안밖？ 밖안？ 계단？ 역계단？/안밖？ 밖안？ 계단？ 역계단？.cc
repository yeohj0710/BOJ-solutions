#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    string str; cin >> str;

    if(str == "fdsajkl;" || str == "jkl;fdsa") cout << "in-out\n";
    else if(str == "asdf;lkj" || str == ";lkjasdf") cout << "out-in\n";
    else if(str == "asdfjkl;") cout << "stairs\n";
    else if(str == ";lkjfdsa") cout << "reverse\n";
    else cout << "molu\n";
}
