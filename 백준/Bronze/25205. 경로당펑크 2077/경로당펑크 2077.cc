#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    string vowel = "koijpuhynbmlOP";

    int N; cin >> N;

    string str; cin >> str;

    bool check = true;

    for(int i=0; i<vowel.length(); i++)
        if(str[N-1] == vowel[i]) check = false;

    if(check) cout << 1 << "\n";
    else cout << 0 << "\n";
}
