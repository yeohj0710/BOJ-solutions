#include<stdio.h>
#include<string.h>

int main() {
    int count = 0, i = 0;
    char word[105];
    scanf("%s", word);
    while(i<strlen(word)) {
        if(word[i] == 'd' && word[i+1] == 'z' && word[i+2] == '=') i += 3;
        else if(word[i] == 'c' && word[i+1] == '=') i += 2;
        else if(word[i] == 'c' && word[i+1] == '-') i += 2;
        else if(word[i] == 'd' && word[i+1] == '-') i += 2;
        else if(word[i] == 'l' && word[i+1] == 'j') i += 2;
        else if(word[i] == 'n' && word[i+1] == 'j') i += 2;
        else if(word[i] == 's' && word[i+1] == '=') i += 2;
        else if(word[i] == 'z' && word[i+1] == '=') i += 2;
        else i++;
        count++;
    }
    printf("%d", count);
}
