#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<int> GetPi(string &Pattern) {
    vector<int> Pi(Pattern.length());
    for(int i=1, j=0; i<Pattern.length(); i++) {
        while(j>0 && Pattern[i] != Pattern[j]) j = Pi[j-1];
        if(Pattern[i] == Pattern[j]) Pi[i] = ++j;
    }
    return Pi;
}

int main() {
    int N;
    string Str;
    cin >> N >> Str;
    vector<int> Pi = GetPi(Str);
    int L = Str.length();
    cout << L-Pi[L-1];
}
