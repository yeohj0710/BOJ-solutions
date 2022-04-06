#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    string a, b; cin >> a >> b;

    if(a.length() < b.length()) {
        string temp = "";
        for(int i=0; i<b.length()-a.length(); i++) temp += "0";
        a = temp + a;
    }
    else if(a.length() > b.length()) {
        string temp = "";
        for(int i=0; i<a.length()-b.length(); i++) temp += "0";
        b = temp + b;
    }

    for(int i=0; i<a.length(); i++)
        cout << (a[i] - '0') + (b[i] - '0');
}
