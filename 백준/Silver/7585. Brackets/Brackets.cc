#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    while(true) {
        string str; getline(cin, str);
        if(str == "#") break;

        stack<char> s;
        bool check = true;

        for(int i=0; i<str.length(); i++) {
            if(str[i] == '(' || str[i] == '{' || str[i] == '[') s.push(str[i]);
            else if(str[i] == ')') {
                if(!s.empty() && s.top() == '(') s.pop();
                else {
                    check = false;
                    break;
                }
            }
            else if(str[i] == '}') {
                if(!s.empty() && s.top() == '{') s.pop();
                else {
                    check = false;
                    break;
                }
            }
            else if(str[i] == ']') {
                if(!s.empty() && s.top() == '[') s.pop();
                else {
                    check = false;
                    break;
                }
            }
        }

        if(check && s.empty()) cout << "Legal\n";
        else cout << "Illegal\n";
    }
}
