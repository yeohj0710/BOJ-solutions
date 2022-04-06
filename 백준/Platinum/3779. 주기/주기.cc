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
    for(int t=1; ; t++) {
        int N;
        cin >> N;
        if(N == 0) break;
        string Str;
        cin >> Str;
        vector<int> Pi = GetPi(Str);
        int L = Str.length();
        printf("Test case #%d\n", t);
        for(int i=1; i<=L; i++)
            if(i%(i-Pi[i-1]) == 0 && i/(i-Pi[i-1]) > 1)
                printf("%d %d\n", i, i/(i-Pi[i-1]));
        printf("\n");
    }
}
