#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    string a[] = {"i", "pa", "te", "ni", "niti", "a", "ali", "nego", "no", "ili"};

    string word; cin >> word;
    cout << char(word[0] - 'a' + 'A');

    while(cin >> word) {
        bool check = false;
        for(int i=0; i<10; i++)
            if(word == a[i]) check = true;

        if(check) continue;

        cout << char(word[0] - 'a' + 'A');
    }
}
