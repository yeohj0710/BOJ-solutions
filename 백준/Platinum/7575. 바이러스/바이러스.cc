#include <cstdio>
#include <vector>
#include <string>
#include <algorithm>
#define MAX 105
using namespace std;

int N, K, L, Value, Yes = 0;
vector<int> Code[MAX];

vector<int> Fail(vector<int> &SubCode) {
    vector<int> Pi(SubCode.size());
    for(int i=1, j=0; i<SubCode.size(); i++) {
        while(j>0 && SubCode[i] != SubCode[j]) j = Pi[j-1];
        if(SubCode[i] == SubCode[j]) Pi[i] = ++j;
    }
    return Pi;
}

int KMP(vector<int> &Code, vector<int> &SubCode) {
    vector<int> Pi = Fail(SubCode);
    for(int i=0, j=0; i<Code.size(); i++) {
        while(j>0 && Code[i] != SubCode[j]) j = Pi[j-1];
        if(Code[i] == SubCode[j]) {
            if(j == SubCode.size()-1) return 1;
            else j++;
        }
    }
    return 0;
}

int main() {
    scanf("%d %d", &N, &K);
    for(int i=0; i<N; i++) {
        scanf("%d", &L);
        for(int j=0; j<L; j++) {
            scanf("%d", &Value);
            Code[i].push_back(Value);
        }
    }
    for(int i=0; i<Code[0].size()-K+1; i++) {
        vector<int> SubCode(K);
        for(int j=0; j<K; j++) SubCode[j] = Code[0][i+j];
        int Check = 1;
        for(int j=1; j<N; j++) {
            vector<int> RevCode = Code[j];
            reverse(RevCode.begin(), RevCode.end());
            if(!KMP(Code[j], SubCode) && !KMP(RevCode, SubCode)) Check = 0;
        }
        if(Check) Yes = 1;
    }
    if(Yes) printf("YES");
    else printf("NO");
}
