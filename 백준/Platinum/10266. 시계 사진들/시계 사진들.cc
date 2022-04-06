#include <cstdio>
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

bool KMP(string Str, string Pattern) {
    vector<int> Pi = Fail(Pattern), Pos;
    for(int i=0, j=0; i<Str.length(); i++) {
        while(j>0 && Str[i] != Pattern[j]) j = Pi[j-1];
        if(Str[i] == Pattern[j]) {
            if(j == Pattern.length()-1) return true;
            else j++;
        }
    }
    return false;
}

int main() {
    int N, Value;
    scanf("%d", &N);
    string A, B;
    for(int i=0; i<360000; i++) A += '0', B += '0';
    for(int i=0; i<N; i++) {
        scanf("%d", &Value);
        A[Value] = '1';
    }
    for(int i=0; i<N; i++) {
        scanf("%d", &Value);
        B[Value] = '1';
    }
    if(KMP(A+A, B)) printf("possible");
    else printf("impossible");
}
