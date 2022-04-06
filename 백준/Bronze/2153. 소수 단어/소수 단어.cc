#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    string word; cin >> word;

    int sum = 0;
    for(int i=0; i<word.length(); i++) {
        if(word[i] >= 'a' && word[i] <= 'z') sum += word[i] - 'a' + 1;
        else if(word[i] >= 'A' && word[i] <= 'Z') sum += word[i] - 'A' + 27;
    }

    bool check = true;
    for(int i=2; i*i<=sum; i++)
        if(sum % i == 0) {
            check = false;
            break;
        }

    if(check) cout << "It is a prime word.";
    else cout << "It is not a prime word.";
}
