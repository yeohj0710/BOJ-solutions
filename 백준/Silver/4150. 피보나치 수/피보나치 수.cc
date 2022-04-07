#include <bits/stdc++.h>
using namespace std;

string sum(string a, string b) {
    int diff = max(a.length(), b.length()) - min(a.length(), b.length());

    if(a.length() < b.length())
        for(int i=0; i<diff; i++) a = "0" + a;
    else if(a.length() > b.length())
        for(int i=0; i<diff; i++) b = "0" + b;

    vector<int> c;
    for(int i=0; i<a.length(); i++) c.push_back(a[i] - '0' + b[i] - '0');

    reverse(c.begin(), c.end());

    for(int i=0; i<c.size(); i++) {
        if(c[i] < 10) continue;

        if(i < c.size()-1) c[i+1] += c[i]/10;
        else c.push_back(c[i]/10);

        c[i] %= 10;
    }

    reverse(c.begin(), c.end());

    string ret;

    int i = 0; while(c[i] == 0) i++;
    if(i >= c.size()) ret.push_back('0');

    while(i < c.size()) {
        ret.push_back(char(c[i] + '0'));
        i++;
    }

    return ret;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    vector<string> fibo;
    fibo.push_back("0");
    fibo.push_back("1");

    int N; cin >> N;
    for(int i=2; i<=N; i++) fibo.push_back(sum(fibo[i-1], fibo[i-2]));

    cout << fibo[N];
}
