#include <stdio.h>

int main() {
    int T, input, tri[100], n = 1, check;
    while(n*(n+1)/2 <= 1000) tri[n++] = n*(n+1)/2;
    scanf("%d", &T);
    for(int i=0; i<T; i++) {
        scanf("%d", &input);
        check = 0;
        for(int j=1; j<n; j++)
            for(int k=j; k<n; k++)
                for(int l=k; l<n; l++)
                    if(tri[j]+tri[k]+tri[l] == input) check = 1;
        printf("%d\n", check);
    }
}
