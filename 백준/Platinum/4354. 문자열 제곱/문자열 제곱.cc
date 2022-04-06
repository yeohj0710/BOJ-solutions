#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<int> Fail(string Pattern) {
    vector<int> Pi(Pattern.length());
    for(int i=1, j=0; i<Pattern.length(); i++) {
        while(j>0 && Pattern[i] != Pattern[j]) j = Pi[j-1];
        if(Pattern[i] == Pattern[j]) Pi[i] = ++j;
    }
    return Pi;
}

int main() {
    string Str;
    while(1) {
        cin >> Str;
        if(Str.compare(".") == 0) break;
        vector<int> Pi = Fail(Str);
        int L = Str.length();
        if(L%(L-Pi[L-1]) == 0) cout << L/(L-Pi[L-1]) << "\n";
        else cout << "1\n";
    }
}
