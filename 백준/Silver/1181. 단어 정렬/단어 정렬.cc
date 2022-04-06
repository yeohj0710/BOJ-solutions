#include <bits/stdc++.h>
using namespace std;

vector<string> word;

bool Compare(string &a, string &b) {
    if(a.length() < b.length()) return true;
    else if(a.length() == b.length()) {
        if(a < b) return true;
        else return false;
    }
    else return false;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;
    for(int i=0; i<N; i++) {
        string str; cin >> str;
        word.push_back(str);
    }

    sort(word.begin(), word.end(), Compare);

    for(int i=0; i<word.size(); i++) {
        if(word[i] != word[i+1]) cout << word[i] << "\n";
    }
}
