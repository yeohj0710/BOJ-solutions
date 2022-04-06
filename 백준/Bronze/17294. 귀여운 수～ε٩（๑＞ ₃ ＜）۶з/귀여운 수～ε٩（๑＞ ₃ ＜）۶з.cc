#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    string num; cin >> num;

    if(num.length() <= 2) {
        cout << "◝(⑅•ᴗ•⑅)◜..°♡ 뀌요미!!";
        return 0;
    }

    bool check = true;
    int diff = num[1] - num[0];
    for(int i=2; i<num.length(); i++)
        if(num[i] - num[i-1] != diff) check = false;

    if(check) cout << "◝(⑅•ᴗ•⑅)◜..°♡ 뀌요미!!";
    else cout << "흥칫뿡!! <(￣ ﹌ ￣)>";
}
