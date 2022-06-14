#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int control_f(char[]);
char control_l(char[]);
                    /* Project's Second Subject/Question. */
int main()
{
char sentence[100];
    printf("%25cXXXXXXX  SENTENCE CHECKER  XXXXXXX\n");

    while (1){
    printf("\n \nPlease enter a sentence : ");
    gets(sentence);


if(control_f(strlwr(sentence))==1){
        printf("\n"); puts(sentence);
        printf("is a fully sentence\n");
}
else{
        printf("\n  ----> "); puts(sentence);
        printf(" is not a fully sentence\n");
}
    printf("\nmost repeated letter is : %c\n",control_l(sentence));
    }
return 0;
}

int control_f(char sentence[]){

    char alphabet[]={'a','b','c','d',
                     'e','f','g','h',
                     'i','j','k','l',
                     'm','n','o','p',
                     'q','r','s','t',
                     'u','v','w','x',
                     'y','z'};
int a=0, b=0;
int c=0;
    while(sentence[a]!='\0'){
		for(b=0; b<26; b++){
			if(sentence[a]==alphabet[b]){
alphabet[b]='-';
c++;
			}
		}
a++;
	}
    if(c==26){
return 1;
    }
return 0;
}

char control_l(char sentence[]){

char alphabet[] = {'a','b','c','d',
                    'e','f','g','h',
                    'i','j','k','l',
                    'm','n','o','p',
                    'q','r','s','t',
                    'u','v','w','x',
                    'y','z'};
int repeat[26]={0};
int repeatCount=0;
int a, b;

char repeatedletter='a';

    for(a=0;sentence[a]!='\0';a++){
        for(b=0;b<26;b++){
            if(alphabet[b]==sentence[a]){
                repeat[b]++;
            }
        }
    }
    for(int a=0;a<26;a++){
        if(repeat[a]>repeatCount){
            repeatCount=repeat[a];
            repeatedletter=alphabet[a];
        }
    }
return repeatedletter;
}

