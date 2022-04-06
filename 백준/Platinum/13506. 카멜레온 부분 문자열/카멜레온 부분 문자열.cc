#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<int> GetPi(string Pattern) {
    vector<int> Pi(Pattern.length());
    for(int i=1, j=0; i<Pattern.length(); i++) {
        while(j>0 && Pattern[i] != Pattern[j]) j = Pi[j-1];
        if(Pattern[i] == Pattern[j]) Pi[i] = ++j;
    }
    return Pi;
}

int main() {
    string Str;
    cin >> Str;
    vector<int> Pi = GetPi(Str);
    int L = Str.length(), Max = Pi[L-1];
    while(Max > 0) {
        for(int i=1; i<L-1; i++)
            if(Pi[i] == Max) {
                cout << Str.substr(0, Max);
                return 0;
            }
        Max = Pi[Max-1];
    }
    cout << "-1";
}
