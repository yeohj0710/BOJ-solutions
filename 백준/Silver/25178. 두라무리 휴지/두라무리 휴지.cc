#include <bits/stdc++.h>
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    string a, b; cin >> a >> b;
    string a_ = "", b_ = "";

    int cnt1[5] = {}, cnt2[5] = {};

    for(int i=0; i<N; i++) {
        string vowel = "aeiou";

        bool isVowel = false;
        for(int j=0; j<5; j++)
            if(a[i] == vowel[j]) {
                cnt1[j]++;
                isVowel = true;
            }
        if(!isVowel) a_ += a[i];

        isVowel = false;
        for(int j=0; j<5; j++)
            if(b[i] == vowel[j]) {
                cnt2[j]++;
                isVowel = true;
            }
        if(!isVowel) b_ += b[i];
    }

    bool check = true;

    if(a[0] != b[0] || a[N-1] != b[N-1]) check = false;

    if(a_ != b_) check = false;
    for(int i=0; i<5; i++)
        if(cnt1[i] != cnt2[i]) check = false;

    if(check) cout << "YES\n";
    else cout << "NO\n";
}
