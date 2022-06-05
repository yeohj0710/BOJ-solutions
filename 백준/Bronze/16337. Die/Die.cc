#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    string a, b, c; cin >> a >> b >> c;

    string str = a + b + c;

    if(str == "::::o::::") cout << 1 << "\n";
    else if(str == "o:::::::o") cout << 2 << "\n";
    else if(str == "::o:::o::") cout << 2 << "\n";
    else if(str == "o:::o:::o") cout << 3 << "\n";
    else if(str == "::o:o:o::") cout << 3 << "\n";
    else if(str == "o:o:::o:o") cout << 4 << "\n";
    else if(str == "o:o:o:o:o") cout << 5 << "\n";
    else if(str == "ooo:::ooo") cout << 6 << "\n";
    else if(str == "o:oo:oo:o") cout << 6 << "\n";
    else cout << "unknown\n";
}
