#include <iostream>
#include <vector>
#include <string>
using namespace std;

int N, K, Ans = 0;
vector<bool> Check;
vector<int> Order;
vector<string> Str, ComStr;

void MakeStr() {
    if(Order.size() == N) {
        string Temp;
        for(int i=0; i<N; i++) Temp.append(Str[Order[i]]);
        ComStr.push_back(Temp);
        return;
    }
    for(int i=1; i<N; i++)
        if(!Check[i]) {
            Check[i] = true;
            Order.push_back(i);
            MakeStr();
            Order.pop_back();
            Check[i] = false;
        }
}

vector<int> Fail(string Pattern) {
    vector<int> Pi(Pattern.length());
    for(int i=1, j=0; i<Pattern.length(); i++) {
        while(j>0 && Pattern[i] != Pattern[j]) j = Pi[j-1];
        if(Pattern[i] == Pattern[j]) Pi[i] = ++j;
    }
    return Pi;
}

int KMP(vector<int> &Pi, string Str, string Pattern) {
    int Count = 0;
    for(int i=1, j=0; i<Str.length(); i++) {
        while(j>0 && Str[i] != Pattern[j]) j = Pi[j-1];
        if(Str[i] == Pattern[j]) {
            if(j == Pattern.length()-1) {
                Count++;
                j = Pi[j];
            }
            else j++;
        }
    }
    return Count;
}

int main() {
    cin >> N;
    Str.resize(N), Check.resize(N, false);
    for(int i=0; i<N; i++) cin >> Str[i];
    Order.push_back(0);
    MakeStr();
    cin >> K;
    for(int i=0; i<ComStr.size(); i++) {
        vector<int> Pi = Fail(ComStr[i]);
        string Temp = ComStr[i];
        Temp.append(ComStr[i]);
        if(KMP(Pi, Temp, ComStr[i]) == K) Ans += N;
    }
    cout << Ans;
}
