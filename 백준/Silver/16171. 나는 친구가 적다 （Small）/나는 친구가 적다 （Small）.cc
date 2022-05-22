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

vector<int> KMP(string Str, string Pattern) {
    vector<int> Pi = Fail(Pattern), Pos;
    for(int i=0, j=0; i<Str.length(); i++) {
        while(j>0 && Str[i] != Pattern[j]) j = Pi[j-1];
        if(Str[i] == Pattern[j]) {
            if(j == Pattern.length()-1) {
                Pos.push_back(i-j);
                j = Pi[j];
            }
            else j++;
        }
    }
    return Pos;
}

int main() {
    string rawStr, Str, Pattern;
    cin >> rawStr >> Pattern;
    for(int i=0; i<rawStr.length(); i++)
        if(!(rawStr[i] >= '0' && rawStr[i] <= '9')) Str += rawStr[i];
    vector<int> Pos = KMP(Str, Pattern);
    cout << !Pos.empty();
}
