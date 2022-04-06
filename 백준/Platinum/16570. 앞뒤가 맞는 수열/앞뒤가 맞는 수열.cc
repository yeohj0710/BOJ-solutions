#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> GetPi(vector<int> &Pattern) {
    vector<int> Pi(Pattern.size());
    for(int i=1, j=0; i<Pattern.size(); i++) {
        while(j>0 && Pattern[i] != Pattern[j]) j = Pi[j-1];
        if(Pattern[i] == Pattern[j]) Pi[i] = ++j;
    }
    return Pi;
}

int main() {
    int N, MAX = 0, MAXCnt = 0;
    scanf("%d", &N);
    vector<int> Seq(N);
    for(int i=0; i<N; i++) scanf("%d", &Seq[i]);
    reverse(Seq.begin(), Seq.end());
    vector<int> Pi = GetPi(Seq);
    for(int i=0; i<N; i++)
        if(Pi[i] > MAX) MAX = Pi[i];
    for(int i=0; i<N; i++)
        if(Pi[i] == MAX) MAXCnt++;
    if(MAX != 0) printf("%d %d", MAX, MAXCnt);
    else printf("-1");
}
