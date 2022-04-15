#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    string str; cin >> str;

    stack<char> L, R;
    for(int i=0; i<str.length(); i++) L.push(str[i]);

    int Q; cin >> Q;

    while(Q--) {
        char input; cin >> input;

        if(input == 'L' && !L.empty()) R.push(L.top()), L.pop();
        else if(input == 'D' && !R.empty()) L.push(R.top()), R.pop();
        else if(input == 'B' && !L.empty()) L.pop();
        else if(input == 'P') {
            char c; cin >> c;
            L.push(c);
        }
    }

    while(!L.empty()) R.push(L.top()), L.pop();

    while(!R.empty()) cout << R.top(), R.pop();
}
