#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    vector<string> str(36);

    for(int i=0; i<36; i++) cin >> str[i];

    bool check = true;

    for(int i=0; i<36; i++) {
        int x = str[i][0] - str[(i+1) % 36][0];
        int y = str[i][1] - str[(i+1) % 36][1];

        if(!((abs(x) == 1 && abs(y) == 2) || (abs(x) == 2 && abs(y) == 1))) check = false;
    }

    for(int i=0; i<36; i++)
        for(int j=i+1; j<36; j++)
            if(str[i] == str[j]) check = false;

    if(check) cout << "Valid\n";
    else cout << "Invalid\n";
}
