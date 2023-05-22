#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    string str; cin >> str;

    if(str == "NLCS") cout << "North London Collegiate School\n";
    else if(str == "BHA") cout << "Branksome Hall Asia\n";
    else if(str == "KIS") cout << "Korea International School\n";
    else cout << "St. Johnsbury Academy\n";
}
