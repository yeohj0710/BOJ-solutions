#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    string a[8] = {"1QAZ", "2WSX", "3EDC", "4RFV5TGB",
                    " 6YHN7UJM", "8IK,", "9OL.", "0P;/-['=]"};

    string str; cin >> str;

    int cnt[8] = {};

    for(int i=0; i<str.length(); i++)
        for(int j=0; j<8; j++)
            for(int k=0; k<a[j].length(); k++)
                if(str[i] == a[j][k]) cnt[j]++;

    for(int i=0; i<8; i++) cout << cnt[i] << "\n";
}
