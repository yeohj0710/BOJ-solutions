#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    string str; cin >> str;

    int a, b;

    for(int i=0; i<str.length(); i++)
        if(str[i] == 'U') {
            a = i;
            break;
        }

    for(int i=str.length()-1; i>=0; i--)
        if(str[i] == 'F') {
            b = i;
            break;
        }

    for(int i=0; i<a; i++) cout << "-";
    cout << "U";
    for(int i=a+1; i<b; i++) cout << "C";
    cout << "F";
    for(int i=b+1; i<str.length(); i++) cout << "-";
    cout << "\n";
}
