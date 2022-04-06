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
    int T;
    cin >> T;
    for(int t=0; t<T; t++) {
        string Alphabet, Str, Pattern;
        vector<int> Ans;
        cin >> Alphabet >> Pattern >> Str;
        for(int i=0; i<Alphabet.size(); i++) {
            vector<int> Pos = KMP(Str, Pattern);
            if(Pos.size() == 1) Ans.push_back(i);
            for(int j=0; j<Pattern.length(); j++)
                for(int k=0; k<Alphabet.length(); k++)
                    if(Pattern[j] == Alphabet[k]) {
                        Pattern[j] = Alphabet[(k+1)%Alphabet.length()];
                        break;
                    }
        }
        if(Ans.size() == 0) cout << "no solution";
        else if(Ans.size() == 1) cout << "unique: ";
        else cout << "ambiguous: ";
        for(int i=0; i<Ans.size(); i++) cout << Ans[i] << " ";
        cout << "\n";
    }
}
