#include <iostream>
#include <string>
using namespace std;

int dp[1005][1005] = {0, };
int Max(int a, int b) { return a>b?a:b; }
string A, B;

void print_LCS(int i, int j) {
    if(!dp[i][j]) return;
    if(A[i-1] == B[j-1]) {
        print_LCS(i-1, j-1);
        cout << A[i-1];
    }
    else {
        if(dp[i-1][j] > dp[i][j-1]) print_LCS(i-1, j);
        else print_LCS(i, j-1);
    }
}

int main() {
    cin >> A >> B;
    for(int i=1; i<=A.length(); i++)
        for(int j=1; j<=B.length(); j++) {
            if(A[i-1] == B[j-1]) dp[i][j] = dp[i-1][j-1]+1;
            else dp[i][j] = Max(dp[i-1][j], dp[i][j-1]);
        }
    cout << dp[A.length()][B.length()] << "\n";
    print_LCS(A.length(), B.length());
}
