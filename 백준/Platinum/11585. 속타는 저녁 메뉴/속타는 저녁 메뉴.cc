#include <iostream>
#include <vector>
#include <string>
using namespace std;


int GCD(int X, int Y) {
    while(Y > 0) {
        int R = X%Y;
        X = Y;
        Y = R;
    }
    return X;
}

vector<int> GetPi(string Pattern) {
    vector<int> Pi(Pattern.length());
    for(int i=1, j=0; i<Pattern.length(); i++) {
        while(j>0 && Pattern[i] != Pattern[j]) j = Pi[j-1];
        if(Pattern[i] == Pattern[j]) Pi[i] = ++j;
    }
    return Pi;
}

int KMP(string Str, string Pattern) {
    int Count = 0;
    vector<int> Pi = GetPi(Pattern);
    for(int i=0, j=0; i<Str.length()-1; i++) {
        while(j>0 && Str[i] != Pattern[j]) j = Pi[j-1];
        if(Str[i] == Pattern[j]) {
            if(j == Pattern.length()-1) {
                j = Pi[j];
                Count++;
            }
            else j++;
        }
    }
    return Count;
}

int main() {
    int N;
    cin >> N;
    string A, B;
    char C;
    for(int i=0; i<N; i++) {
        cin >> C;
        A += C;
    }
    for(int i=0; i<N; i++) {
        cin >> C;
        B += C;
    }
    int Case = KMP(A+A, B);
    int Gcd = GCD(N, Case);
    cout << Case/Gcd << "/" << N/Gcd;
}
