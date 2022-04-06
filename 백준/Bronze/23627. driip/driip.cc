#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    string str; cin >> str;
    int L = str.length();
    if(L >= 5 && str[L-5] == 'd' && str[L-4] == 'r' && str[L-3] == 'i' && str[L-2] == 'i' && str[L-1] == 'p')
        cout << "cute";
    else cout << "not cute";
}
