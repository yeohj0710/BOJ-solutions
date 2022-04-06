#include<stdio.h> 
#include<string.h> 

int main(void) { 
	char sentence[260]={'\0', }, end[3]={'#','\n'}; 
	fgets(sentence,sizeof(sentence),stdin); 
	while(strcmp(sentence,end)!=0) { 
		int count=0; 
		for(int i=0;i<strlen(sentence);i++) 
			switch(sentence[i]) { 
				case 'a': 
				case 'e': 
				case 'i': 
				case 'o': 
				case 'u': 
				case 'A': 
				case 'E': 
				case 'I': 
				case 'O': 
				case 'U': 
					count++; 
					break; 
				default: 
					break; 
			} 
		printf("%d\n", count); 
		fgets(sentence,sizeof(sentence),stdin); 
	} 
	return 0; 
}
