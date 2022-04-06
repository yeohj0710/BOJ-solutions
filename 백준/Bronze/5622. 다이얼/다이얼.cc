#include<stdio.h>
#include<string.h>

int main() {
    char word[20], count = 0;
    scanf("%s", word);
    for(int i=0; i<strlen(word); i++) {
        if(word[i] >= 'A' && word[i] <= 'C') count += 3;
        else if(word[i] >= 'D' && word[i] <= 'F') count += 4;
        else if(word[i] >= 'G' && word[i] <= 'I') count += 5;
        else if(word[i] >= 'J' && word[i] <= 'L') count += 6;
        else if(word[i] >= 'M' && word[i] <= 'O') count += 7;
        else if(word[i] >= 'P' && word[i] <= 'S') count += 8;
        else if(word[i] >= 'T' && word[i] <= 'V') count += 9;
        else if(word[i] >= 'W' && word[i] <= 'Z') count += 10;
    }
    printf("%d", count);
}
