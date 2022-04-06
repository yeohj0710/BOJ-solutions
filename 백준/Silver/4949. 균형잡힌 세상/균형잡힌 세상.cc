#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    while(true) {
        string str; getline(cin, str);
        if(str == ".") break;

        stack<char> Stack;
        bool check = true;
        for(int i=0; i<str.size(); i++) {
            if(str[i] == '[' || str[i] == '(') Stack.push(str[i]);
            else if(str[i] == ']') {
                if(Stack.empty()) check = false;
                else if(Stack.top() == '[') Stack.pop();
                else if(Stack.top() == '(') check = false;
            }
            else if(str[i] == ')') {
                if(Stack.empty()) check = false;
                else if(Stack.top() == '[') check = false;
                else if(Stack.top() == '(') Stack.pop();
            }
        }

        if(Stack.empty() && check) cout << "yes\n";
        else cout << "no\n";
    }
}
