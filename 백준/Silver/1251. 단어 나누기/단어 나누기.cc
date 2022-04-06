#include <bits/stdc++.h>
using namespace std;

string word;

void rev(int a, int b) {
    string temp = "";

    for(int i=a; i<=b; i++) temp += word[i];
    for(int i=a; i<=b; i++) word[i] = temp[b-i];
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    cin >> word;

    vector<string> List;

    for(int i=1; i<word.length(); i++)
        for(int j=i+1; j<word.length(); j++) {
            rev(0, i-1), rev(i, j-1), rev(j, word.length()-1);
            List.push_back(word);
            rev(0, i-1), rev(i, j-1), rev(j, word.length()-1);
        }

    sort(List.begin(), List.end());
    cout << List[0];
}
